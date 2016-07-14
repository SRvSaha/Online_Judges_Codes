/*
 *  @author     : SRvSaha
 *  Filename    : distance_between_two_points.c
 *  Timestamp   : 10:17 PM 14-JUL-2016
 *  Description : https://www.urionlinejudge.com.br/judge/en/problems/view/1015
 *
 */
#include <stdio.h>
#include <math.h>
int main()
{
    float x1,x2;
    float y1,y2;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    float x = pow((x2-x1),2.0);
    float y = pow((y2-y1),2.0);
    double distance = sqrt(x+y);
    printf("%.4lf\n",distance);
    return 0;
}
