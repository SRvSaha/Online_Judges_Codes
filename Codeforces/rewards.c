/*
 *  @author     : SRvSaha
 *  Filename    : rewards.c
 *  Timestamp   : 05:06 PM 11-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/448/A
 *
 */
#include <stdio.h>
int main()
{
    int cup;
    int medal;
    int count_cup = 0,count_medal = 0;
    int n;
    for(int i = 0; i < 3; i++){
        scanf("%d",&cup);
        count_cup += cup;
    }
    for(int i = 0; i < 3; i++){
        scanf("%d",&medal);
        count_medal += medal;
    }
    scanf("%d",&n);
    if(count_cup % 5 == 0){
        n -= count_cup / 5;
    }
    else{
        n -= count_cup / 5 + 1;
    }
    if(count_medal % 10 == 0){
        if(n >= count_medal/10)
            printf("YES\n");
        else
            printf("NO\n");
    }
    else{
        if(n >= count_medal/10 + 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
