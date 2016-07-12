/*
 *  @author     : SRvSaha
 *  Filename    : area_of_a_circle.c
 *  Timestamp   : 09:09 AM 11-JUL-2016
 *  Description : https://www.urionlinejudge.com.br/judge/en/problems/view/1002
 *
 */
#include <stdio.h>
#include <math.h>
int main()
{
    double R;
    double result;
    scanf("%lf",&R);
    result = 3.14159 * pow(R,2.0);
    printf("A=%.4lf\n",result);
    return 0;
}
