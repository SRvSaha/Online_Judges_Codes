/*
 *  @author     : SRvSaha
 *  Filename    : twins.c
 *  Timestamp   : 06.40 PM 03-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/160/A
 *
 */
 #include <stdio.h>
 #define MINUS_INFINITY -100000
 void merge(int A[], int start, int mid, int end)
 {
     int size_left = mid - start + 1; // since mid and start both gets subtracted, we include
                                     // 1 by adding +1
     int size_right = end - mid; // Right starts from mid + 1 so no need to add +1
     int Left[size_left + 1]; // + 1 is for the sentinal value
     int Right[size_right + 1];
     for(int i = 0; i< size_left; i++){
        Left[i] = A[start + i]; // start + i because start changes everytime
     }
     for(int i = 0; i < size_right; i++){
        Right[i] = A[mid + 1 + i]; // adding +1 since the partition starts from mid+1 not mid
     }
     Left[size_left] = MINUS_INFINITY; // sentinal value
     Right[size_right] = MINUS_INFINITY;
     int i , j;
     i = j = 0;
     for(int k = start; k <= end; k++){
        if(Left[i] >= Right[j])
            A[k] = Left[i++];
        else
            A[k] = Right[j++];
     }

 }
 void merge_sort_reverse(int A[],int start,int end)
 {
    if(start < end){ // This is the base condition when size of sub-problem is 1
        int mid = (start + end) / 2;
        merge_sort_reverse(A,start, mid);
        merge_sort_reverse(A,mid+1, end);
        merge(A,start,mid,end);
    }
 }
 int main(){
    int n, i = 0, sum = 0;
    int coin_val[100];
    int count = 0;
    scanf("%d",&n);
    while(i < n){
        scanf("%d",&coin_val[i]);
        i++;
    }
    for( i = 0; i < n; i++){
        sum += coin_val[i];
    }
    int min = sum / 2;
    merge_sort_reverse(coin_val,0,n-1);
    sum = 0;
    for(int i = 0; i < n; i++){
        sum += coin_val[i];
        if(sum > min){
            count++;
            break;
        }
        count++;
    }
    printf("%d\n",count);
    return 0;
 }
