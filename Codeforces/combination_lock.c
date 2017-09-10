/*
 *  @author     : SRvSaha
 *  Filename    : combination_lock.c
 *  Timestamp   : 02:49 PM 09-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/540/A
 *
 */
#include <stdio.h>
int main()
{
    int n;
    int count = 0;
    char combination[1001];
    char lock[1001];
    scanf("%d",&n);
    scanf("%s",combination);
    scanf("%s",lock);
    for(int i = 0 ; i < n; i++){
        if(combination[i] >= lock[i])
            //count= combination[i] - lock[i];
            count += (combination[i] - lock[i]) < (lock[i] + 10 - combination[i]) ? (combination[i] - lock[i]) : (lock[i] + 10 - combination[i]);
        else{
            count += ((combination[i] + 10) - lock[i]) < (lock[i] - combination[i]) ? ((combination[i] + 10) - lock[i]) : (lock[i] - combination[i]);
        }
    }
    printf("%d\n",count);
    return 0;
}
