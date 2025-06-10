#include <algorithm>
#include <iostream>
#include <header.h>
using namespace std;

 int* Solution::bubble_sort(int arr[],int n){
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
    