#include <algorithm>
#include <iostream>
using namespace std;


//frequency of an element in a string
int main(){
    string s; cin>>s;
    int hash[256]={0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i]]++;
    }
    int q; cin>>q;
    while (q--)
    {
        char ch; cin>>ch;
        cout<<hash[ch]<<endl;
    }
}