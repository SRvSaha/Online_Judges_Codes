/*
 *  @author     : SRvSaha
 *  Filename    : lucky_division.c
 *  Timestamp   : 08:32 PM 10-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/122/A
 *
 */
#include <stdio.h>
int main()
{
    int lucky_numbers[] = {4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    int n;
    scanf("%d",&n);
    for(int i = 0; i < 14; i++){
        if(n % lucky_numbers[i] == 0){
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
