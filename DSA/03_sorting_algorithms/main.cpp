#include <algorithm>
#include <iostream>
#include "header.h"
using namespace std;

void print_array(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[6]={282,93,938,84,22,232};
    Solution sol;
    sol.selection_sort(arr,6);
    print_array(arr,6);
    cout<<endl;

    int arr1[]={282,93,938,84,22,232};
    sol.bubble_sort(arr1,6);
    print_array(arr1,6);
    cout<<endl;

    int arr2[]={282,93,938,84,22,232};
    sol.insertion_sort(arr2,6);
    print_array(arr2,6);
    cout<<endl;

    
}