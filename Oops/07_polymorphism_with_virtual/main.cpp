#include <iostream>
#include "shape.h"
#include "oval.h"
#include "circle.h"

void draw_shape(Shape * s){
    s->draw();
}

int main(){

  Shape shape1("Shape1");
  Oval oval1(2.0,3.5,"Oval1");
  Circle circle1(3.3,"Circle1");

  Shape * shape_ptr = &shape1;
  Shape& shape_ref = circle1;

  Shape* shape_collection[]{&shape1,&oval1,&circle1};
	 
  for(Shape* s_ptr : shape_collection){
      s_ptr->draw();
  }
  

    
   
    return 0;
}