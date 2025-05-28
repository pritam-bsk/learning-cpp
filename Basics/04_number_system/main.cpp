#include <iostream>

int main(){
  int num1 = 51; //decimal
  int num2 = 023; //octal 
  int num3 = 0x0fb; //hexamecimal 
  int num4 = 0b00001111; //binary 

  std::cout << "num1: " << num1 << std::endl;
  std::cout << "num2: " << num2 << std::endl;
  std::cout << "num3: " << num3 << std::endl;
  std::cout << "num4: " << num4 << std::endl;

  return 0;
}