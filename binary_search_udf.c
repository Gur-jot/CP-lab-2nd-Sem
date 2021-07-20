#include <stdio.h>
 
int find(int[], int, int);
int binarySearch(int[], int, int, int);
 
int Binary_Search(int arr[], int n, int key)
{
    int pivot = find(arr, 0, n - 1);
 
    if (pivot == -1)
        return binary_Search(arr, 0, n - 1, key);
 
    
    if (arr[pivot] == key)
        return pivot;
    if (arr[0] <= key)
        return binary_Search(arr, 0, pivot - 1, key);
    return binary_Search(arr, pivot + 1, n - 1, key);
}
 

int find(int arr[], int low, int high)
{
    
    if (high < low)
        return -1;
    if (high == low)
        return low;
 
    int mid = (low + high) / 2; 
    if (mid < high && arr[mid] > arr[mid + 1])
        return mid;
    if (mid > low && arr[mid] < arr[mid - 1])
        return (mid - 1);
    if (arr[low] >= arr[mid])
        return find(arr, low, mid - 1);
    return find(arr, mid + 1, high);
}
 
int binary_Search(int arr[], int low, int high, int key)
{
    if (high < low)
        return -1;
    int mid = (low + high) / 2; 
    if (key == arr[mid])
        return mid;
    if (key > arr[mid])
        return binary_Search(arr, (mid + 1), high, key);
    return binary_Search(arr, low, (mid - 1), key);
}
 

int main()
{
    
    int arr1[] = { 5, 6, 7, 8, 9, 10, 1, 2, 3 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int key = 3;
    printf("Index of the element is : %d",
           Binary_Search(arr1, n, key));
    return 0;
}
