/*
*   @author      : SRvSaha
*   Filename     : killing_issues.c
*   Timestamp    : 07:46 21-August-2016 (Sunday)
*   Description  : AUGUST CIRCUITS || Based on Conditional Probability & GCD
*   Link         : https://www.hackerearth.com/august-circuits/algorithm/killing-assistants/
*
*/
#include <stdio.h>
#define CIN(n) scanf("%d",&n);
#define COUT(n) printf("%d\n",n);
#define MAX(x,y) ((x > y) ? x : y)
#define MIN(x,y) ((x < y) ? x : y)

int gcd(int a, int b)
{
    int temp;
    temp = a;
    a = MAX(a,b);
    b = MIN(temp,b); // Since a get modified, so we need to use temp for a's prev value
    while(b != 0){
        temp = a; // For storing the value of a temporarily
        a = b; // a is modified to the larger of a,a%b of two
        b = temp % b; // b is modified to the a%b
    }
    return MAX(a,b); // Since b will be 0, max will be 'a' at that time
}

int main()
{
    int M,N; // Unbiased and Biased number of killers
    int T; // Test Case
    int nume_; // The numerator
    int deno_; // The denominator
    int gcd_ ; // Hold the gcd value of 2 numbers
    CIN(T)
    while(T--){
        CIN(N)
        CIN(M)
        // The conditional probability is solved and found directly
        nume_ = 9*M;
        deno_ = 8*N + M;
        gcd_ = gcd(nume_,deno_); // To avoid multiple calls to gcd funtion, we saved it value to gcd_
        nume_ /= gcd_;
        deno_ /= gcd_;
        printf("%d/%d\n",nume_,deno_);
    }
    return 0;
}
