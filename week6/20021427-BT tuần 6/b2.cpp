#include<iostream>
#include<algorithm>
using namespace std;
// sap xep lua chon
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++) {
        if (arr[j] < arr[min_idx]) {
            min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }
}
// sap xep chen
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
// sap xep noi bot
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++) {   
    for (int j = 0; j < n-i-1; j++) {
        if (arr[j] > arr[j+1]) {
            swap(arr[j], arr[j+1]);
            }
        }
    }
}
// Quicksort
int partition ( int arr[], int l, int r) {
    int pivot = arr[r];
    int i = l -1 ;
    for( int j = l; j <= r-1; j++) {
        if( arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[r]);
    return i+1;
}
void Quicksort ( int arr[], int l, int r) {
    if( l < r) {
        int pos = partition(arr, l, r);
        Quicksort(arr, l,pos-1);
        Quicksort(arr,pos+1,r);
    }
}
// in mang
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main() {
    int arr[] = {2, 1, 10, 6, 3, 8, 7, 13, 20};
    int n = sizeof(arr)/sizeof(arr[0]);
   // selectionSort(arr, n);
   //insertionSort(arr,n);
   //bubbleSort(arr,n);
   Quicksort(arr,0,n-1);
    printArray(arr,n);
}