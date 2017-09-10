/*
 *  @author     : SRvSaha
 *  Filename    : fuel_spent.c
 *  Timestamp   : 10:42 PM 14-JUL-2016
 *  Description : https://www.urionlinejudge.com.br/judge/en/problems/view/1017
 *
 */
#include <stdio.h>
int main()
{
    int time_spent,avg_speed;
    scanf("%d%d",&time_spent,&avg_speed);
    int distance = time_spent * avg_speed;
    float litres = distance / 12.0;
    printf("%.3lf\n",litres);
    return 0;
}
