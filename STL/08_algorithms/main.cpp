#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool comp(pair<int,int> a, pair<int,int> b){
  if (a.second == b.second) return a.first > b.first;
  return a.second < b.second;
}

int main(){
    const int n=5, m=6;
    int a[n]={3,1,0,4,2}, b[m] = {5,5,8,10,9,7};

    sort(a, a + n);
    sort(b, b + m);
    for(auto x : a) cout << x << " ";
    cout << endl;
    for(auto x : b) cout << x << " ";
    cout << endl;

    vector<int> c {
        a[0], a[1], a[2], a[3], a[4],
        b[0], b[1], b[2], b[3], b[4], b[5]
    };
    sort(c.begin(), c.end());
    for(int x : c) cout << x << " ";
    cout << endl;
    sort(c.begin(), c.begin()+5, greater<int>());
    for(int x : c) cout << x << " ";
    cout << endl;

    //shorting in my own way
    pair<int,int> d[]{
      {1,2},{2,1},{4,1}
    };
    sort(d,d+3,comp);
    for(auto x : d) cout << "{" << x.first << "," << x.second << "} ";
    cout << endl;

    cout<< __builtin_popcount(5) << endl; // Count the number of set bits in 5
    cout<< __builtin_popcountll(5) << endl; // Count the number of set bits in 5 (long long)
    
    string s = "213";
    do
    {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
    
    int max = *max_element(a, a + n);
    cout << "Max element in a: " << max << endl;
    int min = *min_element(b, b + m);
    cout << "Min element in b: " << min << endl;


  return 0;
}