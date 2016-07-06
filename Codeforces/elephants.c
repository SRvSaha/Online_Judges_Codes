/*
 *  @author     : SRvSaha
 *  Filename    : elephants.c
 *  Timestamp   : 04:09 PM 05-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/230/A
 *
 */
 #include <stdio.h>
 int main()
 {
    int distance,count = 0;
    scanf("%d",&distance);
    if( distance/5 > 0 ){
        count += distance / 5;
        distance %= 5;
    }
    if( distance % 5 != 0 )
        count += 1;
    printf("%d\n",count);
    return 0;
 }
