#include <iostream>
#include <list>
using namespace std;
int main(){
  list<int> ls;
  ls.push_back(10);
  ls.emplace_back(20);
  ls.push_front(5);
  ls.emplace_front(1);
  /*Rest functions are same as vector
  begin,end,rbegin,rend,clear,insert,size,swap*/
  ls.pop_back(); 
  ls.pop_front();
  ls.front() = 100; // Change the first element
  ls.back() = 200; // Change the last element
  return 0;
}