/*
 *  @author     : SRvSaha
 *  Filename    : game_of_robots.c
 *  Timestamp   : 07:52 PM 09-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/673/A
 *
 */
#include <stdio.h>
int main()
{
    int minutes[91];
    int n;
    int count = 0;
    scanf("%d",&n);
    minutes[n] = 90;
    for(int i = 0; i < n; i++)
        scanf("%d",&minutes[i]);
    for(int i = 0; i < n; i++){
        if(minutes[0] > 15){
            printf("15\n");
            return 0;
        }
        else{
            if(minutes[i+1] - minutes[i] <= 15)
                count = minutes[i+1];
            else{
                count = minutes[i] + 15;
                break;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
