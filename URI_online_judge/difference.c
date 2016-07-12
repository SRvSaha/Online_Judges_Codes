/*
 *  @author     : SRvSaha
 *  Filename    : difference.c
 *  Timestamp   : 08:14 PM 12-JUL-2016
 *  Description : https://www.urionlinejudge.com.br/judge/en/problems/view/1007
 *
 */
#include <stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int DIFERENCA = a*b - c*d;
    printf("DIFERENCA = %d\n",DIFERENCA);
    return 0;
}
