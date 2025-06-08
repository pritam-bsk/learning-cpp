#include <algorithm>
#include <iostream>
using namespace std;

class Solution{
public:
    int* selection_sort(int arr[],int n){
        for (int i = 0; i < n-1; i++)
        {
            int min=i;
            for (int j = i+1; j < n; j++)
            {
                if (arr[min]>arr[j])
                {
                    min=j;
                }
            }
            swap(arr[min],arr[i]);

        }
        return arr;
    }
    int* bubble_sort(int arr[],int n){
        for (int i = 0; i < n-1; i++)
        {
            for (int j = 0; j < n-i-1; j++)
            {
                if (arr[j+1]<arr[j])
                {
                    swap(arr[j+1],arr[j]);
                }
            }
        }
        return arr;
    }
    int* insertion_sort(int arr[],int n){
        
    }

};

int main(){
    int arr[6]={282,93,938,84,22,232};
    Solution sol;
    sol.selection_sort(arr,6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int arr1[]={282,93,938,84,22,232};
    sol.bubble_sort(arr1,6);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
}