/*
*   @author      : SRvSaha
*   Filename     : compare_the_triplets.c
*   Timestamp    : 21:20 17-October-2016 (Monday)
*   Description  : Simple comparison of values of two arrays.!!
*   Link         : https://www.hackerrank.com/challenges/compare-the-triplets
*
*/
// These are default included libraries while coding in HackerRank Online IDE
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a[3];
    int b[3];
    int count_a = 0;
    int count_b = 0;
    for(int i = 0; i < 3; i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0; i < 3; i++){
        scanf("%d",&b[i]);
    }
    for(int i = 0; i < 3; i++){
        if(a[i]>b[i])
            count_a++;
        else if(a[i]<b[i])
            count_b++;
    }
    printf("%d %d\n",count_a,count_b);
    return 0;
}
