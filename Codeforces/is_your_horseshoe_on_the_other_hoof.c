/*
 *  @author     : SRvSaha
 *  Filename    : is_your_horseshoe_on_the_other_hoof.c
 *  Timestamp   : 10:20 PM 08-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/228/A
 *
 */
#include <stdio.h>
 int main()
 {
    long colour1,colour2,colour3,colour4;
    int count = 0;
    scanf("%ld%ld%ld%ld",&colour1,&colour2,&colour3,&colour4);
    if(colour1 == colour2 || colour1 == colour3 ||colour1 == colour4)
        count +=1;
    if(colour2 == colour3 || colour2 == colour4)
        count += 1;
    if (colour3 == colour4)
        count += 1;
    printf("%d\n",count);

    return 0;
 }
