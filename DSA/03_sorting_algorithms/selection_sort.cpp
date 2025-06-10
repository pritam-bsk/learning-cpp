#include <algorithm>
#include <iostream>
#include "header.h"
using namespace std;

int* Solution::selection_sort(int arr[],int n){
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