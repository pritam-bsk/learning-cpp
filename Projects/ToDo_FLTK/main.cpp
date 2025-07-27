#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Scheme.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Hold_Browser.H>
#include <string>
#include <cstring>

class taskWidgets{
public:
    Fl_Input* input;
    Fl_Hold_Browser* browser;
    taskWidgets(Fl_Input* input,Fl_Hold_Browser* browser){
        this->input = input;
        this->browser = browser;
    }
};

void addTask(Fl_Widget* , void* data){
    taskWidgets* widgets = static_cast<taskWidgets*>(data);
    std::string task = widgets->input->value();

    if(!task.empty()){
        task = std::to_string(widgets->browser->size()+1)+". "+task;
        widgets->browser->add(task.c_str());
        widgets->input->value("");
        widgets->input->take_focus();
    }
}

void remTask(Fl_Widget* widget,void* data){
    Fl_Hold_Browser* brwoser = static_cast<Fl_Hold_Browser*>(data);
    int index = brwoser->value();
    if(index>0) brwoser->remove(index);
}

int main(){
    Fl::scheme("gtk+"); 
    Fl::set_font(FL_HELVETICA, "Arial"); 
    Fl_Window* window = new Fl_Window(720-192,450-150,385,300,"To-Do List");
    Fl_Input* input = new Fl_Input(50,10, 325, 25, "Task:");
    Fl_Button* add_btn = new Fl_Button(10, 40, 75, 20, "Add Task");
    Fl_Button* del_btn = new Fl_Button(100, 40, 100, 20, "Delete Task");
    Fl_Hold_Browser* browser = new Fl_Hold_Browser(10, 70, 365, 200, "Tasks:");

    taskWidgets* widgets = new taskWidgets(input,browser);
    add_btn->callback(addTask,widgets);

    del_btn->callback(remTask, browser);
    window->end();
    window->show();
    return Fl::run(); 
}
