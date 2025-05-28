#include <iostream>
#include <iomanip>

int main(){
  float num1{5.098765432456789123456f} ;//precison: 7
  double num2{9.456787483483947839473} ;//precison:15
  long double num3{84.98488393774288389888l}; //precison: >double

  std::cout << "size of float: " << sizeof(num1) << "\n"              //4
            << "size of double: " << sizeof(num2) << "\n"             //8
            << "size of long double: " << sizeof(num3) << std::endl;  //16
  
  std::cout << std::setprecision(20); // Control the precision from std::cout.
  std::cout << "number1 is : " << num1 << std::endl; //7 digits
  std::cout << "number2 is : " << num2 << std::endl; // 15'ish digits
  std::cout << "number3 is : " << num3 << std::endl; // 15+ digits

  double num4{3.544e-11}; //scitefic notation
  std::cout << "number4 is : " << num4 << std::endl;

  bool red_light {false};
  bool green_light{true};

  std::cout << "size of bool: " << sizeof(bool) << std::endl;

  //Printing out a bool
  //1 -->> true
  //0 -->> false
  std::cout << std::endl;
  std::cout << "red_light : " << red_light << std::endl;
  std::cout << "green_light : " << green_light << std::endl;

  std::cout << std::boolalpha;
  std::cout << "red_light : " << red_light << std::endl;
  std::cout << "green_light : " << green_light << std::endl;

  std::cout << std::noboolalpha;
  std::cout << "red_light : " << red_light << std::endl;
  std::cout << "green_light : " << green_light << std::endl;

  char a{'n'};
  char b{'a'};
  std::cout << std::endl;
  std::cout << "size of char: " << sizeof(char) << std::endl;

  char value = 65 ; // ASCII character code for 'A'
  std::cout << "value : " << value << std::endl; // A
  std::cout << "value(int) : " << static_cast<int>(value) << std::endl; 

  return 0;
}