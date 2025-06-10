#include <algorithm>
#include <iostream>
#include "header.h"
using namespace std;

int* Solution::insertion_sort(int arr[],int n){
        for (int i = 0; i < n; i++)
        {
            for (int j = i;j>0&&arr[j]<arr[j-1]; j--)
            {
                swap(arr[j-1],arr[j]);
            }   
        }
    return arr;
}