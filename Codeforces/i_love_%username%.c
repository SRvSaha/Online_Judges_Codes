/*
 *  @author     : SRvSaha
 *  Filename    : i_love_%username%.c
 *  Timestamp   : 06:12 PM 11-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/155/A
 *
 */
#include <stdio.h>
int main()
{
    int min,max;
    int achievement = 0;
    int rating;
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        if(i == 0){
            scanf("%d",&rating);
            min = max = rating;
        }
        else{
            scanf("%d",&rating);
            if(rating > max || rating < min){
                achievement += 1;
                if(rating > max)
                    max = rating;
                if(rating < min)
                    min = rating;
            }
        }
    }
    printf("%d\n",achievement);
    return 0;
}
