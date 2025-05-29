#include <iostream>
int say_age_val(int age){
  ++age;
  std::cout <<  "Hello , you are " << age << " years old! &age : " << &age <<  std::endl;
  return age;
}

int say_age_ptr(int* age){
  ++(*age);
  std::cout <<  "Hello , you are " << *age << " years old! &age : " << age <<  std::endl;
  return *age;
}

int say_age_ref(int& age){
  ++age; 
  std::cout <<  "Hello , you are " << age << " years old! &age : " << &age <<  std::endl;//24
  return age;
}