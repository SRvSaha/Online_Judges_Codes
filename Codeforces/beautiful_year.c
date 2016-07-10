/*
 *  @author     : SRvSaha
 *  Filename    : beautiful_year.c
 *  Timestamp   : 04:59 PM 10-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/271/A
 *
 */
#include <stdio.h>
int main()
{
    int year,temp;
    scanf("%d",&year);
    year+= 1;
    int a,b,c,d;
    while(1){
       temp = year; // Each digit needs to be compared to taken temp and used mod
       d = temp%10;
       temp /= 10;
       c = temp%10;
       temp /= 10;
       b = temp%10;
       temp /= 10;
       a = temp;
       if(a != b && a != c && a != d && b != c && b != d && c != d) // Check all the digits if they are same or not
            break;
       year++;
    }
    printf("%d\n",year);
    return 0;
}
