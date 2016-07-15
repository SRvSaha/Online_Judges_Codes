/*
 *  @author     : SRvSaha
 *  Filename    : banknotes.c
 *  Timestamp   : 06:47 PM 14-JUL-2016
 *  Description : https://www.urionlinejudge.com.br/judge/en/problems/view/1018
 *
 */
#include <stdio.h>
int main()
{
    long amount;
    scanf("%ld",&amount);
    printf("%ld\n",amount);
    printf("%ld nota(s) de R$ 100,00\n",amount/100);
    amount %= 100;
    printf("%ld nota(s) de R$ 50,00\n",amount/50);
    amount %= 50;
    printf("%ld nota(s) de R$ 20,00\n",amount/20);
    amount %= 20;
    printf("%ld nota(s) de R$ 10,00\n",amount/10);
    amount %= 10;
    printf("%ld nota(s) de R$ 5,00\n",amount/5);
    amount %= 5;
    printf("%ld nota(s) de R$ 2,00\n",amount/2);
    amount %= 2;
    printf("%ld nota(s) de R$ 1,00\n",amount/1);
    return 0;
}
