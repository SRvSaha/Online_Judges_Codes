#include <iostream>
#include <stdio.h>
using namespace std;

void swap_(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void selection_sort(int A[], int n){
    int min;
    for(int i = 0; i < n - 1; i++){
        min = i;
        for(int j = i+1; j < n; j++){
            if(A[min] > A[j])
                min = j;
        }
        if(i != min)
            swap(A[min], A[i]);
    }
}

void bubble_sort(int A[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(A[j] > A[j+1])
                swap_(A[j], A[j+1]);
        }
    }
}
void insertion_sort(int A[], int n){
    for(int i = 1; i < n; i++){
        int k = A[i];
        int j;
        for(j = i - 1; j >= 0 && k < A[j]; j--){
            A[j+1] = A[j];
        }
        A[j+1] = k;
    }
}
void printArray(int A[], int n){
    for(int i = 0; i < n; i++)
        cout<<A[i]<<" ";
}
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    selection_sort(arr, n);
    // bubble_sort(arr, n);
    // insertion_sort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}