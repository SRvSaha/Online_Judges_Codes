/*
*   @author      : SRvSaha
*   Filename     : kangaroo.c
*   Timestamp    : 22:34 17-October-2016 (Monday)
*   Description  : Good Question based on Arithmetic Progression
*   Link         : https://www.hackerrank.com/challenges/kangaroo
*
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#define CIN(n) scanf("%d",&n);
#define COUT(n) printf("%d\n",n);
#define log(x) log10(x)/log10(2)


int main()
{
    int x1,x2;
    int v1,v2;
    int d1,d2;
    CIN(x1)
    CIN(v1)
    CIN(x2)
    CIN(v2)
    if(v1<=v2)
        printf("NO\n");
    else{
        // Nth Term of AP must be equal for both to be YES
        if((x2-x1)%(v1-v2) == 0) // x1 + (n-1)*v1 = x2 + (n-1)*v2
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
