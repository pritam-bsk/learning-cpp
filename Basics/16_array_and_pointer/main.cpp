#include <iostream>

void pirnt_array(int arr[5]){
  for (size_t i = 0; i < 5; i++)
  {
    std::cout << arr[i] << " ";
  }
}

int main(){
  int scores[10] {11,12,13,14,15,16,17,18,19,20};
  int * p_score {scores};
  // The array name is a pointer, but a special pointer that kind of identifies the entire array
  
  //Print the address
  std::cout << "scores : " << scores << std::endl; // Array
  std::cout << "p_score : " << p_score << std::endl;// Pointer
  std::cout << "&scores[0]  : " << &scores[0] << std::endl;
  std::cout << std::endl;

  std::cout << "*scores : " << *scores << std::endl;
  std::cout << "scores[0] : " << scores[0] << std::endl;
  std::cout << "*p_score : " << *p_score << std::endl;
	std::cout << "p_score[0] : " << p_score[0] << std::endl;


  // ====================================
  // SWAPING ARRAY ELEMENTS USING POINTER
  // =====================================
  int arr1[5]{1,2,3,4,5};
  int arr2[5]{6,7,8,9,0};
  int* ptr_arr1{arr1};
  int* ptr_arr2{arr2};
  int *temp{};
  
  std::cout << "Before swaping" << std::endl;
  std::cout << "arr1: "; pirnt_array(ptr_arr1);
  std::cout << std::endl;
  std::cout << "arr2: "; pirnt_array(ptr_arr2);
  std::cout << std::endl;

  
  temp = ptr_arr1;
  ptr_arr1 = ptr_arr2;
  ptr_arr2 = temp;

  std::cout << "After swaping" << std::endl;
  std::cout << "arr1: "; pirnt_array(ptr_arr1);
  std::cout << std::endl;
  std::cout << "arr2: "; pirnt_array(ptr_arr2);
  std::cout << std::endl;
  

  std::cout << *p_score<< std::endl;
  p_score++;                            //shifts address by 4 Bytes [size of int]
  std::cout << *p_score<< std::endl;
  p_score++;                            //shifts address by 4 Bytes
  std::cout << *p_score<< std::endl;
  p_score++;                            //shifts address by 4 Bytes
  std::cout << *p_score<< std::endl;
  p_score++;                            //shifts address by 4 Bytes
  std::cout << *p_score<< std::endl;
  p_score++;                            //shifts address by 4 Bytes
  std::cout << *p_score<< std::endl;
  p_score++;                            //shifts address by 4 Bytes
  std::cout << *p_score<< std::endl;
  p_score++;                            //shifts address by 4 Bytes
  std::cout << *p_score<< std::endl;
  p_score++;                            //shifts address by 4 Bytes
  std::cout << *p_score<< std::endl;
  p_score++;                            //shifts address by 4 Bytes
  std::cout << *p_score<< std::endl;


  p_score = scores;    // reset pointing to first
  std::cout << "scores[4] : " << *(p_score + 4) << std::endl; // Moves forward by 4 * sizeof(int)

  // same with array name

  
  std::cout << *scores<< std::endl;
  std::cout << *scores + 1<< std::endl;
  std::cout << *scores + 2<< std::endl;
  std::cout << *scores + 3<< std::endl;
  std::cout << *scores + 4<< std::endl;

  return 0;
}