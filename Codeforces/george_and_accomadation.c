/*
 *  @author     : SRvSaha
 *  Filename    : george_and_accomodation.c
 *  Timestamp   : 09.55 PM 03-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/467/A
 *
 */
 #include <stdio.h>
 int main()
 {
    int rooms;
    int count = 0;
    int p,q;
    scanf("%d",&rooms);
    while(rooms--){
        scanf("%d %d",&p,&q);
        if(q - p >= 2)
            count++;
    }
    printf("%d\n",count);
    return 0;
 }
