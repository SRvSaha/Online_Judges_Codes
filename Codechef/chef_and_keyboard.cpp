/*
*   @author      : SRvSaha
*   Filename     : chef_key.cpp
*   Timestamp    : 14:15 17-October-2016 (Monday)
*   Description  : Codechef Long OCT'16 || Simple Factorization || O(c) Time
*   Link         : https://www.codechef.com/OCT16/problems/CHEFKEY
*
*/
#include <stdio.h>
#include <math.h>
#define CIN(n) scanf("%d",&n);
#define COUT(n) printf("%d\n",n);
#define log(x) log10(x)/log10(2)


int main()
{
    int n,m,c;
    int T;
    int count;
    CIN(T)
    while(T--){
        count = 0;
        CIN(n)
        CIN(m)
        CIN(c)
        for(int i = 1; i <= c; i++){
            if(c%i == 0){
                if(i<=n && c/i <= m)
                    count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
