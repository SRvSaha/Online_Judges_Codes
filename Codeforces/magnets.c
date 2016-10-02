/*
*   @author      : SRvSaha
*   Filename     : magnets.c
*   Timestamp    : 20:40 02-October-2016 (Sunday)
*   Description  : 344A
*   Link         : http://codeforces.com/problemset/problem/344/A
*
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#define CIN(n) scanf("%d",&n);
#define COUT(n) printf("%d\n",n);
#define log(x) log10(x)/log10(2)


int main()
{
    int n;
    CIN(n);
    int count = 1;
    char temp[3],num[3];
    scanf("%s",temp);
    for(int i = 1; i<n ; i++){
        scanf("%s",num);
        if(strcmp(temp,num) != 0)
            count++;
        strcpy(temp,num);
    }
    COUT(count);
    return 0;
}
