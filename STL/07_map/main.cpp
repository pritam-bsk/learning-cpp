#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
  map<int,int> mpp;
  mpp[1] = 2;
  mpp.insert({3, 4});
  mpp.emplace(5, 6);
  for(auto i : mpp){
    cout << i.first << " " << i.second << endl;
  }
  auto it = mpp.find(3);
  cout << "Found: " << it->first << " " << it->second << endl;
  // rest are same as set //lower_bound, upper_bound, erase, clear, size, empty

  multimap<int, int> mmp; // multimap allows duplicate keys in sorted order
  
  unordered_map<int, int> ump; // unordered_map allows unique keys in no particular order


  return 0;
}