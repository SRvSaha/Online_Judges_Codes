/*
 *  @author     : SRvSaha
 *  Filename    : the_greatest.c
 *  Timestamp   : 08:57 PM 13-JUL-2016
 *  Description : https://www.urionlinejudge.com.br/judge/en/problems/view/1013
 *
 */
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a > b && a > c){
        printf("%d eh o maior\n",a);
    }
    else if(b > c){
        printf("%d eh o maior\n",b);
    }else{
        printf("%d eh o maior\n",c);
    }
    return 0;
}
