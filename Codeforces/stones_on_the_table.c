/*
 *  @author     : SRvSaha
 *  Filename    : tram.c
 *  Timestamp   : 02:01 PM 03-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/266/A
 *
 */
 #include <stdio.h>
 int main()
 {
    char stones[51];
    int n;
    int i = 0, count = 0;
    scanf("%d",&n);
    scanf("%s",stones);
    while(stones[i+1] != '\0'){
        if(stones[i] == stones[i+1]){
            count++;
        }
        i++;
    }
    printf("%d\n",count);
    return 0;
 }
