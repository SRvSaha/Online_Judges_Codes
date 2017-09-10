/*
*   @author      : SRvSaha
*   Filename     : chef_and_chocolate.c
*   Timestamp    : 13:54 06-August-2016 (Saturday)
*   Description  : CODECHEF AUGUST LONG
*   Link         : https://www.codechef.com/AUG16/problems/CHCHCL
*
*/
#include <stdio.h>
int main()
{
    int T;
    long n,m;
    scanf("%d",&T);
    while(T--){
        scanf("%ld %ld",&n,&m);
        // if( n % 2 == 0 || m % 2 == 0){
        if ( (m * n) % 2 == 0){
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
    return 0;
}
