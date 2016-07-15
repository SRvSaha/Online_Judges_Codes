/*
 *  @author     : SRvSaha
 *  Filename    : time_conversion.c
 *  Timestamp   : 07:04 PM 14-JUL-2016
 *  Description : https://www.urionlinejudge.com.br/judge/en/problems/view/1019
 *
 */
#include <stdio.h>
int main()
{
    int seconds;
    int hh,mm,ss;
    scanf("%d",&seconds);
    hh = seconds / 3600;
    seconds %= 3600;
    mm = seconds / 60;
    seconds %= 60;
    ss = seconds;
    printf("%d:%d:%d\n",hh,mm,ss);
    return 0;
}
