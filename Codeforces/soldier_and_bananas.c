/*
 *  @author     : SRvSaha
 *  Filename    : soldier_and_bananas.c
 *  Timestamp   : 10:30 PM 03-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/546/A
 *
 */
 #include <stdio.h>
 int total_cost(int banana_cost,int banana_wanted)
 {
    int total;
    total = (banana_cost) *  (banana_wanted) * (banana_wanted + 1) / 2 ;
    return total;
 }
 int main()
 {
    int banana_cost;
    int init_dollar;
    int banana_wanted;
    int borrow;
    scanf("%d %d %d",&banana_cost,&init_dollar,&banana_wanted);
    int total = total_cost(banana_cost,banana_wanted);
    if(total > init_dollar){
        borrow = total - init_dollar;
    }
    else
        borrow = 0;
    printf("%d\n",borrow);
    return 0;
 }
