#include <iostream>
#include "header.h"
using namespace std;

void print_array(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    cout<<"selection_sort"<<endl;
    int arr[6]={282,93,938,84,22,232};
    Solution sol;
    sol.selection_sort(arr,6);
    print_array(arr,6);
    cout<<endl;

    cout<<"bubble_sort"<<endl;
    int arr1[]={282,93,938,84,22,232};
    sol.bubble_sort(arr1,6);
    print_array(arr1,6);
    cout<<endl;

    cout<<"insertion_sort"<<endl;
    int arr2[]={282,93,938,84,22,232};
    sol.insertion_sort(arr2,6);
    print_array(arr2,6);
    cout<<endl;

    cout<<"merge_sort"<<endl;
    int arr3[]={282,93,938,84,22,232};
    sol.merge_sort(arr3,0,5);
    print_array(arr3,6);
    cout<<endl;

    cout<<"bubble_sort_recursion"<<endl;
    int arr4[]={282,93,938,84,22,232};
    sol.bubble_sort_recursion(arr4,6);
    print_array(arr4,6);
    cout<<endl;

    cout<<"insertion_sort_recursion"<<endl;
    int arr5[]={282,93,938,84,22,232};
    sol.insertion_sort_recursion(arr5,0,6);
    print_array(arr5,6);
    cout<<endl;

    cout<<"quick_sort"<<endl;
    int arr6[]={282,93,938,84,22,232};
    sol.quick_sort(arr6,0,5);
    print_array(arr6,6);
    cout<<endl;
}