#include <algorithm>
#include <iostream>
#include "header.h"
using namespace std;

 int* Solution::bubble_sort_recursion(int arr[],int n){
    if(n==1) return arr;
    for (int j = 0; j < n-1; j++)
    {
        if (arr[j+1]<arr[j])
        {
            swap(arr[j+1],arr[j]);
        }
    }
    Solution::bubble_sort_recursion(arr,n-1);
    return arr;
}
    