#include <iostream>

void func(int &a){
  a=30;
}

int main(){
  int var = 10;
  int &ref = var;
  ref = 20;
  func(var);
  std::cout << var << "\n";

  double double_value {12.34};
  double& ref_double_value {double_value};
  double* p_double_value {&double_value};
	
	std::cout << "double_value : " << double_value << std::endl;
	std::cout << "ref_double_value : " << ref_double_value << std::endl;
  std::cout << "&double_value : " << &double_value << std::endl;
  std::cout << "&ref_double_value : " << &ref_double_value << std::endl;
	std::cout << "p_double_value : " << p_double_value << std::endl;
	std::cout << "*p_double_value : " << *p_double_value << std::endl;
	
	//Writting through pointer
	*p_double_value = 15.44;
	
  std::cout << std::endl;
	std::cout << "double_value : " << double_value << std::endl;
	std::cout << "ref_double_value : " << ref_double_value << std::endl;
  std::cout << "&double_value : " << &double_value << std::endl;
  std::cout << "&ref_double_value : " << &ref_double_value << std::endl;
	std::cout << "p_double_value : " << p_double_value << std::endl;
	std::cout << "*p_double_value : " << *p_double_value << std::endl;
	
	//Writting through reference
	ref_double_value = 18.44;
	
  std::cout << std::endl;
	std::cout << "double_value : " << double_value << std::endl;
	std::cout << "ref_double_value : " << ref_double_value << std::endl;
  std::cout << "&double_value : " << &double_value << std::endl;
  std::cout << "&ref_double_value : " << &ref_double_value << std::endl;
	std::cout << "p_double_value : " << p_double_value << std::endl;
	std::cout << "*p_double_value : " << *p_double_value << std::endl;


  double some_other_double{78.45};

  //Make the reference reference something else.
  ref_double_value = some_other_double;

  std::cout << std::endl;
  std::cout << "Making the reference reference something else..." << std::endl;
	std::cout << "double_value : " << double_value << std::endl;
	std::cout << "ref_double_value : " << ref_double_value << std::endl;
  std::cout << "&double_value : " << &double_value << std::endl;
  std::cout << "&ref_double_value : " << &ref_double_value << std::endl;
	std::cout << "p_double_value : " << p_double_value << std::endl;
	std::cout << "*p_double_value : " << *p_double_value << std::endl;



  //Make the pointer point to something else
  some_other_double = 56.90;
  p_double_value = &some_other_double;
  std::cout << std::endl;
  std::cout << "Making the pointer point somewhere else..." << std::endl;
	std::cout << "double_value : " << double_value << std::endl;
	std::cout << "ref_double_value : " << ref_double_value << std::endl;
  std::cout << "&double_value : " << &double_value << std::endl;
  std::cout << "&ref_double_value : " << &ref_double_value << std::endl;
	std::cout << "p_double_value : " << p_double_value << std::endl;
	std::cout << "*p_double_value : " << *p_double_value << std::endl;


  *p_double_value = 555.5;

  std::cout << std::endl;
	std::cout << "double_value : " << double_value << std::endl;
	std::cout << "ref_double_value : " << ref_double_value << std::endl;
  std::cout << "&double_value : " << &double_value << std::endl;
  std::cout << "&ref_double_value : " << &ref_double_value << std::endl;
	std::cout << "p_double_value : " << p_double_value << std::endl;
	std::cout << "*p_double_value : " << *p_double_value << std::endl;
   
    return 0;
  return 0;
}