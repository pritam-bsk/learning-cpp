#include <iostream>

int main(int argc,char* argv[]){
  std::cout << "We have " << argc << " parameters in our program" << std::endl;

  for(size_t i {0}; i < argc ; ++i){
      std::cout << "parameter [" << i << "] :" <<  argv[i] << std::endl;
  }
  return 0;
}

//run by ./new.out hello world
//output will be
//We have 3 parameters in our program
// parameter [0] :./new.out
// parameter [1] :hello
// parameter [2] :world