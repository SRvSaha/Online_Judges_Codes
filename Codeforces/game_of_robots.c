/*
 *  @author     : SRvSaha
 *  Filename    : game_of_robots.c
 *  Timestamp   : 06:51 PM 09-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/670/A
 *
 */
#include <stdio.h>
int main()
{
    long n,k;
    scanf("%ld%ld",&n,&k);
    long identifier[1000000];
    for(int i = 1; i <=n; i++){
        scanf("%ld",&identifier[i]);
        if(k > i)
            k -= i;
    }
    printf("%ld\n",identifier[k]);
    return 0;
}
