// #include<bits/stdc++.h> // includes all header files
                           // only avialable on mingw gcc not on clang

#include <iostream>
using namespace std;

int main(){
  pair<int,int> p = {1,6};
  cout<<p.first<<" "<<p.second<<endl;
  pair<int,pair<int,int>> p1 = {3,{8,6}};
  cout<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;
  pair<int,int> arr[]{{2,3},{8,7},{5,0}};
  cout<<arr[0].first;
  return 0;
}