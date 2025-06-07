#include <algorithm>
#include <iostream>
using namespace std;


//frequency of an element in an array
int main(){
    int n=0; 
    cin>>n;
    int arr[n];
    int hash[1000000]={0};
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        hash[arr[i]]++;
    }
    int q; cin>>q;
    while (q--)
    {
        int num; cin>>num;
        cout<<hash[num]<<endl;
    }
}