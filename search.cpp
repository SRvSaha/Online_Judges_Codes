#include <iostream>
#include <stdio.h>

int linear_search(int arr[], int size, int item){
    int flag = 0;
    int i, index = -1;
    for(i = 0; i < size; i++){
        if(arr[i] == item){
            flag = 1;
            index = i;
        }

    }
    return index;
}
int binary_search(int A[], int size, int high, int low, int item){
    int mid;
    while(high > low){
        mid = (high+low+1)/2;
        if(A[mid] < item)
            low = mid + 1;
        else if(A[mid] > item)
            high = mid - 1;
        else
            return mid;
    }
    return -1;
}
using namespace std;
int main(){
    int arr[100000];
    int n;
    int item;
    // cin>>n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter %d number of elements into the array\n", n);
    for(int i = 0; i < n; i++){
        // cin>>arr[i];
        scanf("%d", &arr[i]);
    }
    // cin>>item;
    printf("Enter the item to search in the array: ");
    scanf("%d", &item);
    // cout<<linear_search(arr, n, item);
    // printf("Element found at index : %d\n", linear_search(arr, n, item));
    int val = binary_search(arr, n, n-1, 0, item);
    printf("Element found at index : %d\n", val);
    return 0;
}
