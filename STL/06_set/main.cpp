#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main(){
  set<int> st;     //sorted and stores unique value
  st.insert(1);
  st.insert(2);
  st.insert(2);
  st.insert(4);
  st.insert(3);

  set<int>::iterator it = st.begin();
  auto it1 = st.find(3); // find returns an iterator to the element if found, otherwise it returns end()

  st.erase(4); 
  st.erase(it1);
  st = {1, 2, 3,4, 5, 6}; 
  st.erase(st.begin(), st.find(4));

  multiset<int> mst; // stores duplicate values in sorted order
  //everything else is same as set
  mst = {1, 2, 2, 3, 4, 5, 6};
  mst.erase(2); // erases all instances of 2
  mst = {1, 2, 2, 3, 4, 5, 6};
  mst.erase(mst.find(2)); // erases one instance of 2
  mst.erase(mst.find(2), mst.find(2)++); // erases two instance of 2


 unordered_set<int> ust; // stores unique values in no particular order


  return 0;
}  
  
