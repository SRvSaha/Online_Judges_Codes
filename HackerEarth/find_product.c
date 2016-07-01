/*
 * @author     : SRvSaha
 * Filename    : find_product.c
 * Timestamp   : 3.28 PM 30-Jun-2016
 * Description : https://www.hackerearth.com/problem/algorithm/find-product/
 *
 */

 #include <stdio.h>
 #define MOD 1000000007
 int main()
 {
    int size;
    int arr[1000];
    long answer = 1;
    scanf("%d",&size);
    int i = 0;
    while(i<size){
        scanf("%d",&arr[i]);
        i++;
    }
    for(int i = 0 ; i<size; i++){
        answer *= arr[i] % MOD;
    }
    printf("%ld\n",answer);
    return 0;
}
