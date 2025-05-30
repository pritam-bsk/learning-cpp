#include <iostream>
int main(){

  short short_var {-68} ; //  2 Bytes 
  short int short_int {90} ; // 
  signed short signed_short {24}; //
  signed short int signed_short_int {-43}; // 
  unsigned short int unsigned_short_int {63}; //

  int int_var {55} ; // 4 bytes
  signed signed_var {66};//
  signed int signed_int {77};//
  unsigned int unsigned_int{88};//

  long long_var {35}; // 4 OR 8 Bytes
  long int long_int {334}; //
  signed long signed_long {356}; //
  signed long int signed_long_int {644}; //
  unsigned long int unsigned_long_int{454}; //

  long long long_long {8384548};// 8 Bytes
  long long int long_long_int {9393439};//
  signed long long signed_long_long {444444}; //
  signed long long int signed_long_long_int{13454}; //
  unsigned long long int unsigned_long_long_int{123456}; //

  std::cout << "Short variable : " << short_var<<  " , size : "
  << sizeof (short) << " bytes" << std::endl;

  std::cout << "Short Int : " << short_int << " , size : "
  << sizeof (short int) << " bytes" << std::endl;

  std::cout << "Signed short : " << signed_short
  << " , size : " << sizeof (signed short) << " bytes" << std::endl;

  std::cout << "Signed short int :  " << signed_short_int
  <<  " , size : " << sizeof (signed short int) << " bytes" << std::endl;
  
  std::cout << "unsigned short int :  " << unsigned_short_int
  <<  " , size : " << sizeof (unsigned short int) << " bytes" << std::endl;
  
  std::cout << "---------------------" << std::endl;




  std::cout << "Int variable :  " << int_var <<" , size : "
      << sizeof (int) << " bytes" << std::endl;

  std::cout << "Signed variable " << signed_var <<" , size : "
      << sizeof (signed) << " bytes" << std::endl;

  std::cout << "Signed int :  " << signed_int <<" , size : "
      << sizeof (signed int) << " bytes" << std::endl;
      
  std::cout << "unsigned int :  " << unsigned_int <<" , size : "
      << sizeof (unsigned int) << " bytes" << std::endl;
      
  std::cout << "---------------------" << std::endl;


  std::cout << "Long variable :  " << long_var << " , size : "
      << sizeof (long) << " bytes" <<std::endl;

  std::cout << "Long int :  " << long_int <<" , size : "
      << sizeof (long int) << " bytes" << std::endl;

  std::cout << "Signed long :  " << signed_long <<" , size : "
      << sizeof (signed long) << " bytes" << std::endl;

  std::cout << "Signed long int : " << signed_long_int <<" , size : "
      << sizeof (signed long int) << " bytes" << std::endl;
      
  std::cout << "unsigned long int : " << unsigned_long_int <<" , size : "
      << sizeof (unsigned long int) << " bytes" << std::endl;
      
  std::cout << "---------------------" << std::endl;



  std::cout << "Long long : " << long_long <<" , size : "
      << sizeof (long long) << " bytes" << std::endl;

  std::cout << "Long long int : " << long_long_int <<" , size : "
      << sizeof (long long int) << " bytes" << std::endl;

  std::cout << "Signed long long : " << signed_long_long <<" , size : "
      << sizeof (signed long long) << " bytes" <<std::endl;
      
  std::cout << "Signed long long int : " << signed_long_long_int <<" , size : "
      << sizeof (signed long long int) << " bytes" << std::endl;
      
  std::cout << "unsigned long long int : " << unsigned_long_long_int <<" , size : "
      << sizeof (unsigned long long int) << " bytes" << std::endl;
      
  std::cout << "---------------------" << std::endl;
  


  return 0;
}