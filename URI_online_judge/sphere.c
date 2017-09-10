/*
 *  @author     : SRvSaha
 *  Filename    : sphere.c
 *  Timestamp   : 09:13 PM 12-JUL-2016
 *  Description : https://www.urionlinejudge.com.br/judge/en/problems/view/1011
 *
 */
#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
    float R;
    double result;
    scanf("%f",&R);
    result = 4.0/3 * PI *  pow(R,3.0);
    printf("VOLUME = %.3f\n",result);
    return 0;
}
