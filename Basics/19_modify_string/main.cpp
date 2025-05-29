#include <iostream>
int main(){
  std::string str1 {"The Lion Dad"};
  
  std::cout << "str1 is : " << str1 << std::endl;
  std::cout << "str1 size : " << str1.size() << std::endl;
  std::cout << "str1 capacity : " << str1.capacity() << std::endl;
  
  str1.clear();

  // INSERT

  std::cout << std::endl;
  std::cout << "str1 is : " << str1 << std::endl;
  std::cout << "str1 size : " << str1.size() << std::endl;
  std::cout << "str1 capacity : " << str1.capacity() << std::endl;

  std::cout << std::endl;
  std::string str2 {"122"};
  std::cout << "str2 : " << str2 << std::endl;
  str2.insert(0,1,'3');
  std::cout << "str2 : " << str2 << std::endl;//1322

  std::string str3 {"Hello!"};
  const char * txt3{" World"};
	
  std::cout << std::endl;
	std::cout << "str3 : " << str3 << std::endl;
  str3.insert(5,txt3);
  std::cout << "str3 : " << str3 << std::endl;//Hello World!

  std::string str4{"Hello!"};
  const char * txt4{" World Health Organization"};
	
	std::cout << std::endl;
  std::cout << "str4 : " << str4 << std::endl;
  str4.insert(5,txt4,6);
  std::cout << "str4 : " << str4 << std::endl; //Hello World!

  std::cout << std::endl;
  std::string str5{" World"};
  std::string str6{"Hello!"};
	std::cout << "str6 : " << str6 << std::endl;
  str6.insert(5,str5);
  std::cout << "str6 : " << str6 << std::endl;

  std::cout << std::endl;
  std::string str7{"Hello!"};
  std::string str8{"Statistical Analysis of the World Population."};
	std::cout << "str7 : " << str7 << std::endl;
  str7.insert(5,str8,27,6);
  std::cout << "str7 : " << str7 << std::endl;

  // ERASE

  std::cout << std::endl;
  std::string str9 {"Hello World is a message used to start off things when learning programming!"};; 
  str9.erase(11,str9.size() - 12);
	std::cout << "str9 : " << str9 << std::endl;	
  str9 = "Hello World is a message used to start off things when learning programming!";
	std::cout << "str9 : " << str9.erase(11,str9.size() - 12) << std::endl;


  return 0;
}