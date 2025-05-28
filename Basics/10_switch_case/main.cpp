#include <iostream>

const int Pen{ 10 };
const int Marker{ 20 };
const int Eraser{ 30 };

int main(){
  int tool{Marker};

  switch (tool)
  {
  case Pen:
    std::cout << "Pen is selected" << std::endl;
    break;
  case Marker:
    std::cout << "Marker is selected" << std::endl;
    break;
  default:
    std::cout << "Eraser is selected by default" << std::endl;
    break;
  }

  std::cout << "Code ends here";
  return 0;
}