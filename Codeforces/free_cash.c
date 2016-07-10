/*
 *  @author     : SRvSaha
 *  Filename    : free_cash.c
 *  Timestamp   : 10:44 AM 10-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/237/A
 *
 */
#include <stdio.h>
int main()
{
    int hh,mm;
    int prev_hh,prev_mm;
    int n;
    int min_cashes = 1;
    int count = 1;
    scanf("%d",&n);
    scanf("%d%d",&hh,&mm);
    prev_hh = hh;
    prev_mm = mm;
    n -= 1;

    while(n--){
        scanf("%d%d",&hh,&mm);
        if(prev_hh == hh && prev_mm == mm){
            count += 1;
        }
        else{
            prev_hh = hh;
            prev_mm = mm;
            if(count > min_cashes)
                min_cashes = count; // This is necessary since there
                                    // can be case when there are 3 persons together
                                    // and then after sometimes 2 new persons come
                                    // together. There min_cashes = 3 would do but
                                    // count = 4 if we don't reset it.
            count = 1 ; // Resetting the counter
        }
        if(count > min_cashes)
            min_cashes = count; // Necessary for the case when people come together.
    }
    printf("%d\n",min_cashes);
    return 0;
}
