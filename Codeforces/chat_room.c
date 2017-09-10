/*
*   @author      : SRvSaha
*   Filename     : chat_room.c
*   Timestamp    : 22:58 02-October-2016 (Sunday)
*   Description  : O(N) Time Complexity.
*   Link         : http://codeforces.com/problemset/problem/58/A
*
*/
#include <stdio.h>
#include <math.h>
#define CIN(n) scanf("%d",&n);
#define COUT(n) printf("%d\n",n);
#define log(x) log10(x)/log10(2)


int main()
{
    char str[105];
    scanf("%s",str);
    int count = 0;
    char next = 'h';
    int flag = 0; // for checking l since there are 2 l
    for(int i = 0; str[i] != '\0'; i++){
        if(next == 'h' && str[i] == next){
            next = 'e';
            count++;
            continue;
        }
        else if(next == 'e' && str[i] == next){
            next = 'l';
            count++;
            continue;
        }
        else if(flag == 0 && next == 'l' && str[i] == next){
            next = 'l';
            count++;
            flag = 1;
            continue;
        }
        else if(flag == 1 && next == 'l' && str[i] == next){
            next = 'o';
            count++;
            flag = -1;
            continue;
        }
        else if(next == 'o' && str[i] == next){
            count++;
            next = '\0';
            continue;
        }
    }
    if(count == 5)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
