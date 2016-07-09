/*
 *  @author     : SRvSaha
 *  Filename    : infinite_sequence.c
 *  Timestamp   : 05:10 PM 09-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/675/A
 *
 */
#include <stdio.h>
int main()
{
    long a,term,d;
    scanf("%ld%ld%ld",&a,&term,&d);
    long n;
    if(d == 0){
        if(term == a)
            printf("YES\n");
        else
            printf("NO\n");
    }
    else{
        n = (term - a) / d;
        if(n >= 0 && term == a + n*d)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
