/*
*   @author      : SRvSaha
*   Filename     : maximum_increase.c
*   Timestamp    : 19:21 17-August-2016 (Wednesday)
*   Description  : Time Complexity : O(N) : Longest Increasing Sub-sequence
*   Link         : http://codeforces.com/contest/702/problem/A
*
*/
#include <stdio.h>
int main()
{
    int N;
    int arr[100000];
    int count, temp = 1;
    count = 1;
    scanf("%d",&N);
    for(int i = 0; i < N; i++)
        scanf("%d",&arr[i]);
    for(int i = 0; i < N-1; i++){
        if(arr[i] < arr[i+1])
            temp += 1;
        else{
            temp = 1;
        }
        if(temp > count)
            count = temp;
    }
    printf("%d\n",count);
    return 0;
}
