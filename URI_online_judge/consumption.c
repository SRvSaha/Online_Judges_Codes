/*
 *  @author     : SRvSaha
 *  Filename    : consumption.c
 *  Timestamp   : 09:12 PM 13-JUL-2016
 *  Description : https://www.urionlinejudge.com.br/judge/en/problems/view/1014
 *
 */
#include <stdio.h>
int main()
{
    int X;
    float Y;
    scanf("%d%f",&X,&Y);
    double result = X/Y;
    printf("%.3lf km/l\n",result);
    return 0;
}
