/*
 *  @author     : SRvSaha
 *  Filename    : vanya_and_fench.c
 *  Timestamp   : 02:09 PM 09-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/677/A
 *
 */
#include <stdio.h>
int main()
{
    int n;
    int height_fench;
    int height_person;
    int width = 0;
    scanf("%d%d",&n,&height_fench);
    while(n--){
        scanf("%d",&height_person);
        width += height_person > height_fench ? 2 : 1;
    }
    printf("%d\n",width);
    return 0;
}
