/*
 *  @author     : SRvSaha
 *  Filename    : distance.c
 *  Timestamp   : 10:30 PM 14-JUL-2016
 *  Description : https://www.urionlinejudge.com.br/judge/en/problems/view/1016
 *
 */
#include <stdio.h>
int main()
{
    int distance;
    scanf("%d",&distance);
    int minutos = distance * 2 ; // Since 1 KM is covered in a 2 minute
    printf("%d minutos\n",minutos);
    return 0;

}
