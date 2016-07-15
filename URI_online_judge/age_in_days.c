/*
 *  @author     : SRvSaha
 *  Filename    : age_in_days.c
 *  Timestamp   : 07:19 PM 14-JUL-2016
 *  Description : https://www.urionlinejudge.com.br/judge/en/problems/view/1020
 *
 */
#include <stdio.h>
int main()
{
    int days;
    int yy,mm,dd;
    scanf("%d",&days);
    yy = days / 365;
    days %= 365;
    mm = days / 30;
    days %= 30;
    dd = days;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",yy,mm,dd);
    return 0;
}
