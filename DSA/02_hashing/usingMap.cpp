#include<iostream>
#include<map>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){
    int n=0; 
    cin>>n;
    int arr[n];
    unordered_map<int,int> mpp;
    for (size_t i = 0; i < n; i++)
    {
        cin>>arr[i];
        mpp[arr[i]]++;
    }
    int q; cin>>q;
    while (q--)
    {
        int num; cin>>num;
        cout<<mpp[num]<<endl;
    }
    
    return 0;
}