/*
*   @author      : SRvSaha
*   Filename     : dual_issues.c
*   Timestamp    : 00:21 21-August-2016 (Sunday)
*   Description  : AUGUST CIRCUITS
*   Link         : https://www.hackerearth.com/august-circuits/algorithm/dual-issues/
*
*/
#include <stdio.h>
#include <math.h>
#define CIN(n) scanf("%d",&n);
#define COUT(n) printf("%d\n",n);

int arr[1000];

int is_prime(int n)
{
    for(int i = 2; i <= sqrt(n); i++){
        if(n%i == 0)
            return 0;
    }
    if(n == 1)
        return 0;
    else
        return n;
}
int main()
{
    int T;
    int N;
    CIN(T)
    int res;
    int temp;
    while(T--){
        // clock_t start_ = clock();
        res = -1;
        CIN(N)
        for(int i = 0; i < N; i++)
            CIN(arr[i])
        // TIME LIMIT EXCEEDED
        // for(int i = 0; i < N; i++){
        //     for(int j = 0; j < N; j++){
        //         num1 = is_prime(arr[i]);
        //         num2 = is_prime(arr[j]);
        //         if(num1 != 0 && num2 != 0){
        //             curr = num1 * num2;
        //             if(curr > max)
        //                 max = curr;
        //         }
        //     }
        // }

        // TIME COMPLEXITY reduced to O(N) from O(N*N) by removing redundant checking
        for(int i = 0; i < N; i++){
            if(is_prime(arr[i])){
                temp = is_prime(arr[i]);
                if(res < temp*temp)
                    res = temp*temp;
            }
        }
        COUT(res)
        // clock_t end_ = clock();
        // clock_t total_ = (double)(end_ - start_ ) / CLOCKS_PER_SEC;
        // printf("%2.3lf\n",total_);
    }
    return 0;
}
