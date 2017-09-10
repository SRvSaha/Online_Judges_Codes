/*
 *  @author     : SRvSaha
 *  Filename    : insomnia_cure.c
 *  Timestamp   : 03:08 AM 10-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/148/A
 *
 */
#include <stdio.h>
int dragons[100000]; // Declared Globally since it goes into the heap section
                    // of the memory. Stack section (inside main function) has less // space. So, better to avoid it for bigger space allocation.
void set(int arr[],int size)
{
    int i = 1;
    while(i<=size){
        arr[i] = 0;
        i++;
    }
}
int count(int arr[],int size)
{
    int count = 0;
    for(int i = 1; i <= size; i++){
        if(arr[i] == 1)
            count++;
    }
    return count;
}
int main()
{
    int d;
    int k,l,m,n;
    scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);
    set(dragons,d);
    for(int i = 1; i <= d; i++){
        if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0)
            dragons[i] = 1;
    }
    printf("%d\n",count(dragons,d));
    return 0;
}
