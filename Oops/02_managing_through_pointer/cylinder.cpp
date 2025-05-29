#include <iostream>
#include "cylinder.h"
using namespace std;

Cylinder::Cylinder(double radius, double height){
    this->base_radius = radius;
    this->height = height;
}

double Cylinder::volume(){
    return PI * base_radius * base_radius * height;
}

double Cylinder::get_base_radius(){
    return this->base_radius;
}
double Cylinder::get_height(){
    return this->height;
}
void Cylinder::set_base_radius(double rad_param){
    base_radius = rad_param;
}

void Cylinder::set_height(double height_param){
    height = height_param;
}

Cylinder::~Cylinder(){
    cout<<"destructor is called for "<< base_radius<< " the end of the function"<<endl;
}