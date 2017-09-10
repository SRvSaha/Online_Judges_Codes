/*
 *  @author     : SRvSaha
 *  Filename    : translation.c
 *  Timestamp   : 06:50 PM 04-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/451/A
 *
 */
 #include <stdio.h>
 int main()
 {
    int row,column;
    int count = 1;
    scanf("%d%d",&row,&column);
    int points = row*column;
    while(points != 0){
        points -= row+column -1 ;
        row-= 1;
        column-= 1;
        count++;
    }
    if(count % 2 == 0){
        printf("Akshat\n");
    }
    else
        printf("Malvika\n");
    return 0;
 }
