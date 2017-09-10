/*
 *  @author     : SRvSaha
 *  Filename    : johny_likes_numbers.c
 *  Timestamp   : 07:58 PM 07-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/678/A
 *
 */
#include <stdio.h>
 int main()
 {
    long n,k,remaining;
    unsigned long x;
    scanf("%ld%ld",&n,&k);
    remaining = n % k;
    x = n + (k - remaining);
    printf("%lu\n",x);
    return 0;
 }
