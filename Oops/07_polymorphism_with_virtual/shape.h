#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include <iostream>
using namespace std;

class Shape {
public:
    Shape();
    Shape(string description);
    virtual void draw();
    virtual ~Shape();

protected:
    string description;
public:
};

#endif