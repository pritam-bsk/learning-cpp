#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Int_Input.H>
#include <FL/Fl_Button.H>
#include <FL/fl_draw.H>
#include <FL/fl_message.H>
#include <iostream>
#include <vector>
using namespace std;

const int GRID_SIZE = 9;
const int CELL_SIZE = 40;

Fl_Int_Input* cells[GRID_SIZE][GRID_SIZE];

class Solution : public Fl_Widget{
private:
    bool isValid(int row, int col, char c) {
        for (int i = 0; i < 9; i++) {
            const char* val1 = cells[i][col]->value();
            if (val1 && *val1 == c)
            return false;

            const char* val2 = cells[row][i]->value();
            if (val2 && *val2 == c)
            return false;

            const char* val3 = cells[3 * (row / 3) + i / 3][3 * (col / 3) + i % 3]->value();
            if (val3 && *val3 == c)
            return false;
        }
        return true;
    }
public:
    bool isInitialGridValid() {
        for (int i = 0; i < 9; ++i) {
            for (int j = 0; j < 9; ++j) {
                const char* val = cells[i][j]->value();
                if (val && *val != '\0') {
                    char current = *val;
                    cells[i][j]->value("");

                    if (!isValid(i, j, current)) {
                        char temp[2] = {current, '\0'};
                        cells[i][j]->value(temp);
                        return false;
                    }

                    char temp[2] = {current, '\0'};
                    cells[i][j]->value(temp);
                }
            }
        }
        return true;
    }

    Solution(int X, int Y, int W, int H) : Fl_Widget(X, Y, W, H) {}

    void draw() override {}
    bool solve(){
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++){
                const char* val = cells[i][j]->value();
                if(val && *val == '\0'){
                    for(char c='1';c<='9';c++){
                        if(isValid(i,j,c)){
                            char num_str[2] = {c, '\0'};
                            cells[i][j]->value(num_str);
                            if(solve()) return true;
                            else cells[i][j]->value("");
                        }
                    }
                    return false;
                }
            }
        return true;
    }
};

class SudokuGrid : public Fl_Widget {
public:
    SudokuGrid(int x, int y, int w, int h) : Fl_Widget(x, y, w, h) {}

    void draw() override {
        const int CELL_SIZE = 40;
        fl_color(FL_BLACK);

        for (int i = 0; i <= 9; ++i) {
            int thickness = (i % 3 == 0) ? 3 : 1;
            fl_line_style(FL_SOLID, thickness);

            fl_line(x() + i * CELL_SIZE, y(), x() + i * CELL_SIZE, y() + 9 * CELL_SIZE);
            fl_line(x(), y() + i * CELL_SIZE, x() + 9 * CELL_SIZE, y() + i * CELL_SIZE);
        }
        fl_line_style(0);
    }
};


void get_board(Fl_Widget*,void*){
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            const char* val = cells[i][j]->value();
            if (val && val[0] != '\0')
                std::cout << val << " ";
            else
                std::cout << ". ";
        }
        std::cout << "\n";
    }
    Solution* sol = new Solution(10,10,300,300);
    if (!sol->isInitialGridValid()) {
        fl_alert("Invalid starting grid!");
        delete sol;
        return;
    }
    if (!sol->solve()) {
        fl_alert("No solution exists!");
    }
    delete sol;
}

void clear(Fl_Widget*,void*){
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            cells[i][j]->value("");
        }
    }
}

int main() {
    int win_size = GRID_SIZE * CELL_SIZE;
    int extra = 40;
    Fl_Window* window = new Fl_Window(530,200,win_size, win_size+extra+extra, "9x9 Grid Input");

    vector<vector<string>> test_ = {{"5","3","","","7","","","",""},
                                    {"6","","","1","9","5","","",""},
                                    {"","9","8","","","","","6",""},
                                    {"8","","","","6","","","","3"},
                                    {"4","","","8","","3","","","1"},
                                    {"7","","","","2","","","","6"},
                                    {"","6","","","","","2","8",""},
                                    {"","","","4","1","9","","","5"},
                                    {"","","","","8","","","7","9"}};

    for (int i = 0; i < GRID_SIZE; ++i) {
        for (int j = 0; j < GRID_SIZE; ++j) {
            cells[i][j] = new Fl_Int_Input(j * CELL_SIZE, i * CELL_SIZE, CELL_SIZE, CELL_SIZE);
            cells[i][j]->textsize(18);
            cells[i][j]->align(FL_ALIGN_CENTER);
            cells[i][j]->value(test_[i][j].c_str());
        }
    }
    

    SudokuGrid* grid = new SudokuGrid(0, 0, 360, 360);

    Fl_Button* solve_btn = new Fl_Button(10,9*CELL_SIZE+10,win_size-20,25,"solve");
    solve_btn->callback(get_board);

    Fl_Button* clr_btn = new Fl_Button(10,9*CELL_SIZE+10+35,win_size-20,25,"clear");
    clr_btn->callback(clear);

    window->end();
    window->show();
    return Fl::run();
}
