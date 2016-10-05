/*
*   @author      : SRvSaha
*   Filename     : queue_at_the_school.c
*   Timestamp    : 21:44 05-October-2016 (Wednesday)
*   Description  : O(N*N) || Basic Swapping and String Manipulation
*   Link         : http://codeforces.com/problemset/problem/266/B
*
*/
#include <stdio.h>
#include <math.h>
#define CIN(n) scanf("%d",&n);
#define COUT(n) printf("%d\n",n);
#define log(x) log10(x)/log10(2)

void swap(char *a, char *b)
{
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n,t;
    CIN(n)
    char q[n+2];
    CIN(t)
    scanf("%s",q);
    while(t--){
        for(int i = 0; q[i+1] != '\0'; i++){
            if(q[i] == 'B' && q[i+1] == 'G'){
                swap(&q[i],&q[i+1]);
                i++;
            }
        }
    }
    printf("%s\n",q);
    return 0;
}
