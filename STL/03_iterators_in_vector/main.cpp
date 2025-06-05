#include <iostream>
#include <vector>
using namespace std;
int main(){
  std::vector<int> v = {1, 2, 3, 4, 5, 6};
  std::vector<int>::iterator it = v.begin();
  cout << *it << endl;
  it += 2; 
  cout << *it << endl;

  std::vector<int>::iterator it2 = v.end(); // it2 points to address after the last element
  cout << *(--it2) << endl; 

  std::vector<int>::reverse_iterator it3 = v.rbegin(); // it3 points to the last element
  cout << *it3 << endl;
  it3 += 2; // Move it3 two positions back
  cout << *it3 << endl;

  std::vector<int>::reverse_iterator it4 = v.rend(); // it4 points to address before the first element
  cout<< *(--it4) << endl; // Move it4 to the first element

  for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    cout << *it << " ";
  }
  cout << endl;

  v.erase(v.begin() + 1); // Remove the second element
  v.erase(v.begin()+2,v.begin()+4); // Remove the third and fourth elements
  for(auto it = v.begin(); it != v.end(); it++){
    cout << *it << " ";
  }
  cout << endl;

  v.insert(v.begin()+1, 10); // Insert 10 at the second position
  v.insert(v.begin()+1, 2, 20); // Insert two 20s at the second position
  for(auto it = v.begin(); it != v.end(); it++){
    cout << *it << " ";
  }
  cout << endl;

  vector<int> copy={11, 12, 13};
  v.insert(v.begin(), copy.begin(), copy.end()); // Insert elements from copy at the beginning
  for(auto it = v.begin(); it != v.end(); it++){
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}