/*
 *  @author     : SRvSaha
 *  Filename    : presents.c
 *  Timestamp   : 04:28 PM 04-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/136/A
 *  Algorithm   : Optimized way is : When reading the i-th number, which is equal to a one *can store i into the a-th element of the resulting array. Complexity : O(N). Normal brute *                 force method would take O(n^2) for each element we search in the input.
 */
 #include <stdio.h>
 void set_zero(int arr[],int size)
 {
    for(int i = 0 ; i < size; i++){
        arr[i] = 0;
    }
 }
 int main()
 {
    int gave_gift[100];
    int return_gift[100];
    char ch;
    int n,temp, count = 0;
    //set_zero(return_gift,100); // NOT NECESSARY
    scanf("%d ",&n);
    for(int i = 0 ; i < n; i++){
        scanf("%d%c",&gave_gift[i],&ch); // CLEANER WAY for space separated input
    }
    for(int i = 0; i < n ;i++){
        temp = gave_gift[i];
        return_gift[temp-1] = i +1;
    }
    for(int i = 0; i < n ; i++){
        printf("%d ",return_gift[i]);
    }
    printf("\n");
    return 0;
 }
