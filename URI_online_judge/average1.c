/*
 *  @author     : SRvSaha
 *  Filename    : average1.c
 *  Timestamp   : 03:39 PM 12-JUL-2016
 *  Description : https://www.urionlinejudge.com.br/judge/en/problems/view/1005
 *
 */
#include <stdio.h>
int main()
{
    float grade_A;
    float grade_B;
    double MEDIA;
    scanf("%f%f",&grade_A,&grade_B);
    MEDIA = ( 3.5 * grade_A + 7.5 * grade_B ) / 11;
    printf("MEDIA = %.5lf\n",MEDIA);
    return 0;
}
