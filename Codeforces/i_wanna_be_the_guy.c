/*
 *  @author     : SRvSaha
 *  Filename    : i_wanna_be_the_guy.c
 *  Timestamp   : 01:12 PM 08-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/469/A
 *
 */
#include <stdio.h>
 void set(int arr[], int size)
 {
    int i = 1;
    while(i <= size){
        arr[i] = 0;
        i++;
    }
 }
 int level_not_visited(int arr[],int level)
 {
    return arr[level] == 0 ? 1 : 0 ; // If the level is not visited Return 1 else 0
 }
 int main()
 {
    int n;
    scanf("%d",&n);
    int bits[100];
    int p1_level;
    int p2_level;
    set(bits,n);
    int level;
    scanf("%d",&p1_level);
    for(int i = 0; i < p1_level; i++){
        scanf("%d",&level);
        if(level_not_visited(bits,level))
            bits[level] = 1;
    }
    scanf("%d",&p2_level);
    for(int i = 0; i < p2_level; i++){
        scanf("%d",&level);
        if(level_not_visited(bits,level))
            bits[level] = 1;
    }
    for(int i = 1; i <= n; i++){
        if(bits[i] == 0){
            printf("Oh, my keyboard!\n");
            return 0;
        }
    }
    printf("I become the guy.\n");
    return 0;
 }

