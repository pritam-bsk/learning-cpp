#include <iostream>
#include "shape.h"
using namespace std;
Shape::Shape() : description("Default Shape") {
}
Shape::Shape(string description) : description(description) {
}

void Shape::draw() {
    cout << "Drawing shape: " << description << endl;
}

Shape::~Shape() {
}