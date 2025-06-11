#include <iostream>
#include <algorithm>
#include <vector>
#include "header.h"
using namespace std;

int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i<j)
    {
        while (arr[i]<=pivot && i<high) i++;
        while (arr[j]>pivot && j>low) j--;
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}

int*  Solution::quick_sort(int arr[],int low,int high){
    if (low<high)
    {
        int p_index = partition(arr,low,high);
        quick_sort(arr,low,p_index-1);
        quick_sort(arr,p_index+1,high);
    }
    return arr;
}