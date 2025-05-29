#include <iostream>

int& max_return_reference(int& a, int& b)
{
  if(a > b) {
    return a;
  } else {
    return b;
  }
}

int* max_return_pointer(int* a, int* b)
{
    if(*a > *b) {
      return a;
    } else {
      return b;
    }
}

auto process_number(int value){
  if(value < 10){
    return static_cast<double>(22); // returning int literal
  }else{
    return 33.1; // returning double literal
  }
}

int main(){
  //return by refrence;
  int x{14};
  int y{9};
  int& ref_max = max_return_reference(x,y);
  std::cout << "refmax : " << ref_max << std::endl;


  //return by pointer;
  int a{56};
  int b{45};
  int* p_max = max_return_pointer(&a,&b);
  std::cout << "*p_max : " << *p_max << std::endl;

  //auto type deduction
  auto result = process_number(17);
  std::cout << "result : " << result << std::endl;

  return 0;
}