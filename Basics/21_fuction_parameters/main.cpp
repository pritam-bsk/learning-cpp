#include <iostream>
#include "declare.h"

int main(){
  //pass by value
  int age1{23}; // Local
  std::cout << "age1 (before call) : " << age1 << " &age1 : " << &age1 << std::endl; //23, &a
  say_age_val(age1); // Argument                                                     //23, &b
  std::cout << "age1 (after call) : " << age1 << " &age1 : " << &age1 <<  std::endl; //23, &a

  //pass by pointer
  std::cout << std::endl;
  int age2{23}; // Local
  std::cout << "age2 (before call) : " << age2 << "&age2 : " << &age2 << std::endl; //23, &a
  say_age_ptr(&age2); // Argument                                                   //24, &a
  std::cout << "age2 (after call) : " << age2 << "&age2 : " << &age2 <<  std::endl; //24, &a

  //pass by refrence
  std::cout << std::endl;
  int age3{23}; // Local
  std::cout << "age3(before call) : " << age3 << "&age3 : " << &age3 << std::endl; //23, &a
  say_age_ref(age3); // Argument                                                   //24, &a
  std::cout << "age3(after call) : " << age3 << "&age3 : " << &age3 <<  std::endl; //24, &a

  return 0;
}
