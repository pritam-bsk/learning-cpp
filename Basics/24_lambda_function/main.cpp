#include <iostream>

/*
Lambda function signature : 
            [capture list] (parameters) ->return type{
                    // Function body
            }
*/

int main(){

  auto func = [](){
    std::cout << "Hello World!" << std::endl;
  };
  func();

  [](){
    std::cout << "Hello World!" << std::endl;
  }();

  [](double a, double b){
    std::cout << "a + b : " << (a + b)  << std::endl;
  }(10.0,50.0);

  auto func3 = [](double a, double b)-> int{
    return a + b;
  };
  std::cout << func3(9.8,7.2);

  //Capture lists
  double a{10};
  double b{20};
  
  auto func1 = [a,b](){
      std::cout  << "a + b : " << a + b << std::endl;
  };
  func1();

  //Capture everything by value
  int c{42};
  
  auto func2 = [=](){
      std::cout << "Inner value : " << c << std::endl;
  };
  
  for(size_t i{} ; i < 5 ;++i){
      std::cout << "Outer value : " << c << std::endl;
      func();
      ++c;
  }
  


//Capturing all reference
  int d{5};
  
  auto func4 = [&](){
    std::cout << "Inner value : " << c << std::endl;
    std::cout << "Inner value(d) : " << d << std::endl;
  };
  
  for(size_t i{} ; i < 5 ;++i){
    std::cout << "Outer value : " << c << std::endl;
    func4();
    ++c;
  }

return 0;
}