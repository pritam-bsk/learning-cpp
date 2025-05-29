#include <iostream>
using namespace std;

const double PI{3.1415};

class Cylinder
{
private:
  double radius{1};
  double height{1};
public:
  Cylinder() = default;
  Cylinder(int radius,int height){
    this->radius = radius;
    this->height = height;
  }
  double volume(){
    return PI*radius*radius*height;
  }

};


int main(){
  Cylinder c1(5,4);
  cout<<c1.volume()<<endl;
  return 0;
}