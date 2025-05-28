#include <iostream>

int main(){

  int *ptr{}; // pointing to nullptr
  double *f_ptr{};

  std::cout << "sizeof(*(int*)): " << sizeof(*ptr) <<std::endl;       //4 Bytes
  std::cout << "sizeof(int*): " << sizeof(ptr) <<std::endl;       //8 Bytes
  std::cout << "sizeof(double*): " << sizeof(f_ptr) <<std::endl;  //8 Bytes

  int* ptr1{}, ptr2{}; //both are int pointers;
  int var3{56};
  int* ptr3{&var3};
  std::cout << "ptr3: " << ptr3 << std::endl;
  std::cout << "*ptr3: " << *ptr3 << std::endl;
  std::cout << "*ptr3: " << ++*ptr3  << std::endl;
  std::cout << "var3: " << var3 << std::endl;

  return 0;
}