/*
 *  @author     : SRvSaha
 *  Filename    : divisible_sum_pairs.c
 *  Timestamp   : 09:54 PM 11-JUL-2016
 *  Description : https://www.hackerrank.com/challenges/divisible-sum-pairs
 *
 */
#include <stdio.h>
int main()
{
    int arr[100];
    int n,k;
    char ch;
    int count = 0;
    scanf("%d%d",&n,&k);
    for(int i = 0; i < n; i++){
        scanf("%d%c",&arr[i],&ch);
    }
    for(int i = 0; i < n-1 ; i++){
        for(int j = i+1; j < n; j++){
            if((arr[i] + arr[j]) % k == 0)
                count +=1;
        }
    }
    printf("%d\n",count);
    return 0;
}
