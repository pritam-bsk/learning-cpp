#include <iostream>
#include <algorithm>
#include <vector>
#include "header.h"
using namespace std;

void merge(int arr[],int low,int mid,int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while (left <= mid && right <= high){
        if(arr[left]<= arr[right]){
        temp.push_back(arr[left]);
        left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left<=mid)
    {
        temp.push_back(arr[left]);
        left++;
    }
    while (right<=high)
    {
        temp.push_back(arr[right]);
        right++;
    }
    for(int i = low;i<=high;i++){
        arr[i] = temp[i-low];
    }
}

int* Solution::merge_sort(int arr[],int low,int high){
    if(low >= high) return arr;
    int mid = (low+high)/2;
    Solution::merge_sort(arr,low,mid);
    Solution::merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
    return arr;
}