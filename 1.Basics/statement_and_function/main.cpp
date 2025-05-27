#include <iostream>
int add_number(int a, int b){
    return (a+b);
}

int main(){
    int var{0}; //it is a stratement
    int first_number {13}; // Statement
    int second_number {7}; //Statement

    std::cout << "First number : " << first_number << std::endl; // 13
    std::cout << "Second number : " << second_number << std::endl; // 7

    std::cout << "total : " << add_number(first_number,second_number) << std::endl;

    return 0;
}