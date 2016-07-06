/*
 *  @author     : SRvSaha
 *  Filename    : magnets.c
 *  Timestamp   : 01:24 PM 06-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/479/A
 *
 */
 /*
 COMBINOTORICS : First all the permutations are made and then brute force is applied for find out the required solution.
 */
#include <stdio.h>
 int maximum(int num1,int num2)
 {
    return num1 > num2 ? num1 : num2;
 }
 int main()
 {
    int a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    int num1, num2;
    int max, max1;
    num1 = a + b + c;
    num2 = a * b * c;
    max = maximum(num1,num2);
    num1 = (a + b) * c;
    num2 = (a * b) + c;
    max1 = maximum(num1,num2);
    max = maximum(max,max1);
    num1 = a + (b * c);
    num2 = a * (b + c);
    max1 = maximum(num1, num2);
    max = maximum(max,max1);
    printf("%d\n",max);
    return 0;
 }
