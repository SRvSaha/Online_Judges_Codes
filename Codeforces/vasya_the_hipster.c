/*
 *  @author     : SRvSaha
 *  Filename    : vasya_the_hipster.c
 *  Timestamp   : 11:05 AM 11-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/581/A
 *
 */
#include <stdio.h>
int min(int a,int b)
{
    return a <= b ? a : b;
}
int main()
{
    int sock_type_1,sock_type_2;
    int different_socks;
    int same_socks;
    scanf("%d%d",&sock_type_1,&sock_type_2);
    different_socks = min(sock_type_1,sock_type_2);
    int remaining = sock_type_1 > different_socks ? sock_type_1 - different_socks : sock_type_2 - different_socks;
    same_socks = remaining / 2;
    printf("%d %d\n",different_socks,same_socks);
    return 0;
}
