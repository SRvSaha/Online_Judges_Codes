/*
 *  @author     : SRvSaha
 *  Filename    : new_year_candles.c
 *  Timestamp   : 08:34 PM 04-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/486/A
 *
 */
 #include <stdio.h>
 long long func(long long n)
 {
    // RANGE of long long:   -2^63+1 to +2^63-1 (-10^18 to 10^18)
    /*
    Using brute force it will give a time out error since 10^15 is a very large number. So, I've calculated the AGP sum of the given series and now it can be computed in O(1) time
    */
    long long result;
    if(n % 2 == 0){
        result = n/2;
    }
    else{
        result = -((n+1)/2);
    }
    return result;
 }
 int main()
 {
    long long n;
    scanf("%lld",&n);
    printf("%lld\n",func(n));
    return 0;
 }
