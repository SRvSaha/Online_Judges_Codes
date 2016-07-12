/*
 *  @author     : SRvSaha
 *  Filename    : average2.c
 *  Timestamp   : 06:59 PM 12-JUL-2016
 *  Description : https://www.urionlinejudge.com.br/judge/en/problems/view/1006
 *
 */
#include <stdio.h>
int main()
{
    float a, b, c;
    float MEDIA;
    scanf("%f%f%f",&a,&b,&c);
    MEDIA = (2*a + 3*b + 5*c)/10;
    printf("MEDIA = %.1f\n",MEDIA);
    return 0;
}
