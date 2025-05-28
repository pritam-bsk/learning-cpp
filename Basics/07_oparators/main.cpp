#include <iostream>


int main(){
  int number1 {80};
  int number2 {20};

  std::cout << std::boolalpha;
  std::cout << "number1 < number2 : " << (number1 < number2) << std::endl;
	std::cout << "number1 <= number2 : " << (number1 <= number2) << std::endl;
  std::cout << "number1 > number2 : " << (number1 > number2) << std::endl;
  std::cout << "number1 >= number2 : " << (number1 >= number2) << std::endl;
  std::cout << "number1 == number2 : " << (number1 == number2) << std::endl;
  std::cout << "number1 != number2 : " << (number1 != number2) << std::endl;
  std::cout << std::endl;


  bool a {true};
  bool b {false};
  bool c {true};

  std::cout << " a && b : " << (a && b) << std::endl;
  std::cout << " a && c : " << (a && c ) << std::endl; 
  std::cout << " a && b && c :" << (a && b && c) << std::endl;
  std::cout << std::endl;
  std::cout << " a || b : " << (a || b) << std::endl;
  std::cout << " a || c : " << (a || c ) << std::endl;
  std::cout << " a ||b || c :" << (a || b || c) << std::endl;
  std::cout << std::endl;
  std::cout << "!a : " << !a << std::endl;
	std::cout << "!b : " << !b << std::endl;
	std::cout << "!c : " << !c << std::endl;
  std::cout << std::noboolalpha;


  return 0;
}