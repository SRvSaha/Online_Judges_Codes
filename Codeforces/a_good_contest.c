/*
 *  @author     : SRvSaha
 *  Filename    : a_good_contest.c
 *  Timestamp   : 12:56 PM 09-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/681/A
 *
 */
#include <stdio.h>
int main()
{
    int count = 0;
    int n;
    char handle[11];
    int score_before,score_after;
    scanf("%d",&n);
    while(n--){
        scanf("%s%d%d",handle,&score_before,&score_after);
        if(score_before >= 2400 && score_after > score_before)
            count++;
    }
    if(count > 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
