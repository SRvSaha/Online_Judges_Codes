/*
*   @author      : SRvSaha
*   Filename     : AP2.cpp
*   Timestamp    : 20:29 18-October-2016 (Tuesday)
*   Description  : SPOJ Classical || Modified Version of AP || The Sum of AP can be found out by sum = n/2 * (first_term + last_term) . But in general this sum can be found out by any two terms of AP whose distance from start and end are same cause the common difference is same, so what is added in the term1 is deducted equally in term2 in comparison from first term and last term. In general , sum = n/2 * (term1+term2)
*   Link         : http://www.spoj.com/problems/AP2
*
*/
#include <stdio.h>

#define CIN(n) scanf("%d",&n);
#define COUT(n) printf("%d\n",n);
#define log(x) log10(x)/log10(2)

typedef unsigned long long ULL;
typedef long long LL;


int main()
{
    //BEGIN_CLOCK
    // FR
    //FW
    int T;
    CIN(T)
    ULL third_term;
    ULL third_last_term;
    ULL sum;
    ULL n;
    ULL a,d;
    while(T--){
        scanf("%llu",&third_term);
        scanf("%llu",&third_last_term);
        scanf("%llu",&sum);
        n = (2*sum)/(third_last_term+third_term);
        printf("%llu\n",n);
        d = (third_last_term - third_term)/(n-5);
        a = third_term - 2*d;
        printf("%llu ",a);
        for(ULL i = 1; i < n; i++){
             a += d;
            printf("%llu ",a);
        }
        printf("\n");
    }
    //END_CLOCK
    //PRINT_CLOCK
    return 0;
}
