/*
 *  @author     : SRvSaha
 *  Filename    : salary_with_bonus.c
 *  Timestamp   : 08:48 PM 12-JUL-2016
 *  Description : https://www.urionlinejudge.com.br/judge/en/problems/view/1009
 *
 */
#include <stdio.h>
int main()
{
    char name[1000];
    float fixed_salary;
    float sold;
    double TOTAL;
    scanf("%s%f%f",name,&fixed_salary,&sold);
    TOTAL = fixed_salary + (0.15)*sold;
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
