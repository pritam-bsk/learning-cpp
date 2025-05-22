#include <iostream>

int cel_to_fer(int input){
  return ((input/5)*9)+32;
}
int fer_to_cel(int input){
  return ((input-32)/9)*5;
}
int main(){
  int conv{};
  int input{};
  int result{};
  std::cout << "1.Celsius to Farenheit" << std::endl;
  std::cout << "2.Farenheit to Celsius" << std::endl;
  std::cin >> conv;
  if(conv == 1){
    std::cout << "Please enter Temparature: ";
    std::cin >> input;
    result = cel_to_fer(input);
    std::cout << "Celsius to Farenheit: " << result << std::endl;
    std::cout << "----------------------------------" << std::endl;
    main();
  }else if (conv == 2)
  { std::cout << "Please enter Temparature: ";
    std::cin >> input;
    result = fer_to_cel(input);
    std::cout << "Farenheit to Celsius: " << result << std::endl;
    std::cout << "----------------------------------" << std::endl;
    main();
  } else {
    std::cout << "please enter 1 or 2" << std::endl;
    main();
  }
  
  return 0;
}