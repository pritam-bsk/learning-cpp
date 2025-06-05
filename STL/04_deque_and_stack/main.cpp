#include <iostream>
#include <deque>
#include <stack>
using namespace std;

int main(){
  //all the functions are same as vector and list in deque
  //STACK       LIFO
  stack<int> st;
  st.push(10);
  st.push(20);  
  st.push(30);
  st.push(40);
  st.push(50);
  cout << "Top element: " << st.top() << endl;
  st.pop(); // removes the top element (50)
  cout << "Top element after pop: " << st.top() << endl;

  return 0;
}