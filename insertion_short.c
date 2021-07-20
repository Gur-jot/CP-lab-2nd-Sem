#include <math.h>
#include <stdio.h>
void insertionSort(int [], int );
void insertionSort(int arr[], int n)
{
    int i, k, j;
    for (i = 1; i < n; i++) {
        k = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > k) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
}
 
int main()
{
    int arr[] = { 12, 11, 13, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    insertionSort(arr, n);
    return 0;
}
