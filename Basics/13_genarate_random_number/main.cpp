#include <iostream>
#include <ctime>
#include <cstdlib>

int main(){
  std::srand(std::time(0));     //seed
  int random1 = std::rand();
  std::cout << "random number1: " << random1 << std::endl;

  int random2 = std::rand() % 11 ; // ~[0-10]
  int random3 = std::rand() % 10 + 1; // ~[1-10]
  std::cout << "random number2: " << random2 << std::endl;
  std::cout << "random number3: " << random3 << std::endl;

  return 0;
}