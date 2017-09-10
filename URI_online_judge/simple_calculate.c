/*
 *  @author     : SRvSaha
 *  Filename    : simple_calculate.c
 *  Timestamp   : 08:59 PM 12-JUL-2016
 *  Description : https://www.urionlinejudge.com.br/judge/en/problems/view/1010
 *
 */
#include <stdio.h>
int main()
{
    int id1,id2;
    int num_of_product1,num_of_product2;
    float price_per_unit_product1,price_per_unit_product2;
    scanf("%d%d%f",&id1,&num_of_product1,&price_per_unit_product1);
    scanf("%d%d%f",&id2,&num_of_product2,&price_per_unit_product2);
    float value_to_pay = num_of_product1*price_per_unit_product1 + num_of_product2*price_per_unit_product2;
    printf("VALOR A PAGAR: R$ %.2f\n",value_to_pay);
    return 0;
}
