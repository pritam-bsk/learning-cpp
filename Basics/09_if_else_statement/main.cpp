#include <iostream>

int main(){

    int number1 {75};
    int number2 {60};
    bool result = (number1 < number2);

    if(result == true){
        std::cout << number1 << " is less than " << number2 << std::endl;
    }else{
        std::cout << number1 << " is NOT less than " << number2 << std::endl;
    }

    bool red = false;
    bool green {true};
    bool yellow {false};

    if(red){
        std::cout << "Stop" << std::endl;
     }
     if(yellow){
        std::cout << "Slow down" << std::endl;
     }
	 if(green){
		std::cout << "Go" << std::endl;
	 }

    return 0;
}