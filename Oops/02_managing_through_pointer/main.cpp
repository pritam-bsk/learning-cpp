#include <iostream>
#include "cylinder.h"
using namespace std;


int main(){
  Cylinder cylinder1(10,10);
  cout << "volume : " << cylinder1.volume() << endl;

  Cylinder *p_cylinder1{&cylinder1};
  cout << "volume : " << p_cylinder1->volume() << endl;

  Cylinder* p_cylinder2 = new Cylinder(100,2); // Heap
  cout << "volume(clylinder2) : " << p_cylinder2->volume() << endl;
  cout << "base_rad(cylinder2) : " << p_cylinder2->get_base_radius() << endl;
  delete p_cylinder2;
  p_cylinder2 = nullptr;



  return 0;
}