#include <algorithm>
#include <iostream>
#include "header.h"
using namespace std;

int* Solution::insertion_sort_recursion(int arr[],int i,int n){
    if(i==n) return arr;
    for (int j = i; j>0; j--)
    {
        if (arr[j-1]>arr[j])
        {
            swap(arr[j-1],arr[j]);
        }
    }
    Solution::insertion_sort_recursion(arr,i+1,n);
    return arr;
}