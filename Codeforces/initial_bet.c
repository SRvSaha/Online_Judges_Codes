/*
 *  @author     : SRvSaha
 *  Filename    : initial_bet.c
 *  Timestamp   : 12:00 PM 09-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/478/A
 *
 */
#include <stdio.h>
 int main()
 {
    int c1,c2,c3,c4,c5;
    scanf("%d%d%d%d%d",&c1,&c2,&c3,&c4,&c5);
    int sum = 0;
    sum = c1 + c2 + c3 + c4 + c5;
    if(sum % 5 == 0 && sum >=5)
        printf("%d\n",sum/5);
    else
        printf("-1\n");
    return 0;
 }
