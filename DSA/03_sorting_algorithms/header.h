#ifndef HEADER_H
#define HEADER_H

#include <algorithm>
#include <iostream>
using namespace std;

class Solution{
public:
    int* selection_sort(int arr[],int n);
    int* bubble_sort(int arr[],int n);
    int* insertion_sort(int arr[],int n);
    int* merge_sort(int arr[],int low,int high);
    int* bubble_sort_recursion(int arr[],int n);
    int* insertion_sort_recursion(int arr[],int i, int n);
    int* quick_sort(int arr[],int high,int low);
};

#endif