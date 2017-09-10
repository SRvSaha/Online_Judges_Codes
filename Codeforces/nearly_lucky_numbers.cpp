/*
*   @author      : SRvSaha
*   Filename     : nearly_lucky_numbers.cpp
*   Timestamp    : 20:06 05-October-2016 (Wednesday)
*   Description  : Since it's upto max 18 digits,we need to check only 4 & 7 (Not 44 et al)
*   Link         : http://codeforces.com/problemset/problem/110/A
*
*/
#include <stdio.h>
#include <math.h>
#define CIN(n) scanf("%d",&n);
#define COUT(n) printf("%d\n",n);
#define log(x) log10(x)/log10(2)


int main()
{
    int count = 0;
    char n[20];
    scanf("%s",n);
    for(int i = 0; n[i] != '\0'; i++){
        if(n[i] == '4' || n[i] == '7')
            count++;
    }
    if(count == 4 || count == 7)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
