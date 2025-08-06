#include <iostream>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/fl_draw.H>
#include <FL/Fl_PNG_Image.H>
#include <FL/Fl_Int_Input.H>
#include <FL/Fl_Button.H>
#include <vector>
#include <string>
#include <unordered_map>
#include <FL/filename.H>
#include <unistd.h>     
#include <libgen.h>      
#include <limits.h>
using namespace std;

const int BOX_SIZE = 40;
Fl_Window* window = nullptr;
int IDX = 0;

class Board : public Fl_Widget
{
private:
    int N;
    Fl_PNG_Image* Q_image;
    vector<pair<int,int>> Q_cordinates;
private:
    void backtrack(int col,vector<pair<int,int>>& path,vector<vector<pair<int,int>>>& ans,
                    unordered_map<int,int>& row,unordered_map<int,int>& diag1,
                    unordered_map<int,int>& diag2)
    {
        if(col == N){
            ans.push_back(path);
            return;
        }
        for(int i = 0;i<N;i++){
            if(row[i] == 0 && diag1[i+col] == 0 && diag2[N-1+col-i] == 0){
                path.push_back({i,col});
                row[i]++;
                diag1[i+col]++;
                diag2[N-1+col-i]++;
                backtrack(col+1,path,ans,row,diag1,diag2);
                path.pop_back();
                row[i]--;
                diag1[i+col]--;
                diag2[N-1+col-i]--;
            }
        }
    }
public:
    Board(int X,int Y,int W,int H,int N): Fl_Widget(X,Y,W,H){
        this->N = N;
        // Get executable path
        char exe_path[PATH_MAX];
        ssize_t len = readlink("/proc/self/exe", exe_path, sizeof(exe_path)-1);
        if (len != -1) {
            exe_path[len] = '\0';
            std::string exe_dir = dirname(exe_path);
            std::string img_path = exe_dir + "/../Resources/queen.png";
            Q_image = new Fl_PNG_Image(img_path.c_str());
        } else {
            Q_image = new Fl_PNG_Image("queen.png"); // fallback
        }
        Q_cordinates = Qpositions()[IDX];
    }
    vector<vector<pair<int,int>>> Qpositions(){
        vector<vector<pair<int,int>>> ans;
        vector<pair<int,int>> path;
        unordered_map<int,int> row,diag1,diag2;
        backtrack(0,path,ans,row,diag1,diag2);
        return ans;
    }


    void draw() override{
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++)
            {
                int x = this->x() + j*BOX_SIZE;
                int y = this->y() + i*BOX_SIZE;

                fl_color((i+j)%2 == 0? FL_WHITE : FL_BLACK);
                fl_rectf(x,y,BOX_SIZE,BOX_SIZE);
                fl_color(FL_GRAY);
                fl_rect(x, y, BOX_SIZE, BOX_SIZE);
                for (auto &&q : Q_cordinates)
                {
                    if(q.first == i && q.second == j){
                        int img_w = Q_image->w();
                        int img_h = Q_image->h();
                        int img_x = x + (BOX_SIZE - img_w) / 2;
                        int img_y = y + (BOX_SIZE - img_h) / 2;
                        Q_image->draw(img_x, img_y);
                    }
                }
            }
    }
    ~Board(){
        delete(Q_image);
        Q_image = nullptr;
    }
};

void creatWindow(int n){
    if(window){
        window->hide();
        delete(window);
        window = nullptr;
    }
    window = new Fl_Window(720-192,450-150,BOX_SIZE*n,BOX_SIZE*n,"N-Queen Solver");
    Board* board = new Board(0,0,n*BOX_SIZE,n*BOX_SIZE,n);
    window->end();
    window->show();
}

void solve(Fl_Widget*,void* data){
    Fl_Int_Input* input = (Fl_Int_Input*)data;
    const char* val = input->value();
    if (val && *val != '\0') {
        int n = std::stoi(val);
        if(n>3 && n<16) creatWindow(n);
    } else {
        std::cerr << "Input is empty!" << std::endl;
    }
}

int main(){
    Fl::scheme("gtk+");
    Fl_Window* inputWindow = new Fl_Window(720-192,45-150,200,50,"Input A Number");
    Fl_Int_Input* input = new Fl_Int_Input(60,10, 75, 25, "Enter N:");
    Fl_Button* slove_btn = new Fl_Button(140,10,50,25,"Solve");

    // Fl_Button* nxt_btn = new Fl_Button(20,50,75,25,"previous");
    // Fl_Button* pre_btn = new Fl_Button(100,50,75,25,"next");
    
    slove_btn->callback(solve,(void*)input);


    inputWindow->end();
    inputWindow->show();
    return Fl::run();
}