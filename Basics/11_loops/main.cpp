#include <iostream>
int main(){
  
  // for loop
  for(size_t i{0} , j{50} ; (i < 100) &&  (j>0);++i,j--){    //I can do multiple declaration, multiple condition,
                                                             //multiple incrementation;
    if (!(i%2))
    {
      std::cout << i << " is even" << std::endl;
    }else{
      std::cout << i << " is odd" << std::endl;
    }
  }

  //range based for
  for (auto i : {1,6,7,8,9,0,7})
  {
    std::cout << i << std::endl;
  }
  int a[5]{0,8,6,8,6};
  for (auto i : a)
  {
    std::cout << i << std::endl;
  }
  
  //while loop
  const size_t COUNT{10};
    size_t i{0}; // Iterator declaration

    while(i < COUNT ){ // Test
       std::cout << i << " : I love C++" << std::endl;

       ++i; // Incrementation 
    }

    //do-while loop        //first do then check condition
    const int COUNT{0};
    size_t i{0}; // Iterator declaration

    do{
        std::cout << i << " : I love C++" << std::endl;
        ++i; // Incrementation
    }while( i < COUNT);

  return 0;
}