/*
 * @author     : SRvSaha
 * Filename    : count_divisors.c
 * Timestamp   : 7.52 PM 30-Jun-2016
 * Description : https://www.hackerearth.com/problem/algorithm/count-divisors/
 *
 */
 #include <stdio.h>
 int count_divisors(int l,int k, int r){
    int count = 0;
    for(int i = l; i <= r; i++){
        if( i % k == 0){
            count += 1;
        }
    }
    return count;
 }
 int main(){
    int l,k,r;
    scanf("%d%d%d",&l,&r,&k);
    printf("%d\n",count_divisors(l,k,r));
    return 0;
 }
