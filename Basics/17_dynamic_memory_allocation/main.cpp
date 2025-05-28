#include <iostream>

int main(){
  int *p_number4{new int};
	//p_number4 = new int; 	// Dynamically allocate space for a single int on the heap
                        // This memory belongs to our program from now on. The system
                        // can't use it for anything else, untill we return it.
                        //After this line executes, we will have a valid memory location
                        // allocated. The size of the allocated memory will be such that it
                        // can store the type pointed to by the pointer
						
					
	*p_number4 = 77; // Writting into dynamically allocated memory
	std::cout << std::endl;
	std::cout << "Dynamically allocating memory : " << std::endl;
	std::cout <<"*p_number4 : " << *p_number4 << std::endl;

  //Return memory to the OS
  delete p_number4;
  p_number4 = nullptr;

  // Dynamically allocated arrays

  const size_t size{10};
  double *p_salaries { new double[size]}; // salaries array will contain garbage  values
  int *p_students { new(std::nothrow) int[size]{} }; // All values initialized to 0 
  double *p_scores { new(std::nothrow) double[size]{1,2,3,4,5}}; // Allocating memory space

      // {CODE HERE}

  delete [] p_salaries;
  p_salaries = nullptr;

  delete [] p_students;
  p_students = nullptr;

  delete [] p_scores;
  p_scores = nullptr;


  return 0;
}