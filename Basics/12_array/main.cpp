#include <iostream>

int main(){
  int scores [10]; // Junk data

  std:: cout << "scores : " << *scores << std::endl; //scores is pointer pointing to scores[0];
  std:: cout << "scores [0] : " << scores[0] << std::endl;
  std:: cout << "scores [1] : " << scores[1] << std::endl;

  scores[0] = 20;
  scores[1] = 21;
  scores[2] = 22;

  for( size_t i {0} ; i < 10 ; ++i){
    std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
  }

  double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};
	
	for(size_t i{0}; i < 5; ++i){
		std::cout << "salary[" << i << "] : " << salaries[i] << std::endl;
	}
  int scores1 [] {1,2,5};

   
  int count { std::size(scores1)}; // std::size( C++17)

  std::cout << "sizeof(scores) : " << sizeof(scores1) << std::endl;
  std::cout << "sizeof(scores[0]) : " << sizeof(scores1[0]) << std::endl;
  std::cout << "count : " << count << std::endl;

  return 0;
}