/*
 *  @author     : SRvSaha
 *  Filename    : ilya_and_bank_account.c
 *  Timestamp   : 01:20 PM 11-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/313/A
 *
 */
#include <stdio.h>
int main()
{
    long current_state;
    int temp;
    scanf("%ld",&current_state);
    if(current_state >= 0)
        printf("%ld\n",current_state);
    else{
        temp = current_state % 10;
        if(current_state / 10 >= (current_state / 100)*10 + temp){
            printf("%ld\n",current_state/10);
        }
        else{
            printf("%ld\n",(current_state/100)*10 + temp);
        }

    }
    return 0;
}
