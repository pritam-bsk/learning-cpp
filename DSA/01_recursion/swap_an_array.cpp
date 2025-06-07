#include <algorithm>
#include <iostream>
using namespace std;

class Solution{
public:
    void reverse_array(int arr[],int i, int n){
        if(i >= n/2) return;
        swap(arr[i],arr[n-i-1]);
        reverse_array(arr,i+1,n);
    }
};

int main(){
    int num_of_cases;
    cin >> num_of_cases ;
    Solution sol;
    for (int i = 0; i < num_of_cases; ++i) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sol.reverse_array(arr,0,n);
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<endl;
        }
    }
}