/*
 *  @author     : SRvSaha
 *  Filename    : even_odds.c
 *  Timestamp   : 09:59 AM 06-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/318/A
 *
 */
// The brute force method would have given TLE as there are 10^12 computations. So, used basic
// mathematical logic of even odd to do that in O(1) time.
 #include <stdio.h>
 #define LL long long
 LL position(LL n, LL k)
 {
    LL value;
    k = k-1;
    if( k > (n-1)/2 ){ // All the even cases
        k -= (n-1)/2;
        value = 2*(k);
    }
    else{
        value = 2*k + 1; // For all odd cases
    }
    return value;
 }
 int main()
 {
    LL n,k;
    scanf("%lld %lld",&n,&k);
    printf("%lld\n",position(n,k));
    return 0;
 }
