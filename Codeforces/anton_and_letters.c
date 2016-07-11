/*
 *  @author     : SRvSaha
 *  Filename    : anton_and_letters.c
 *  Timestamp   : 12:22 AM 11-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/443/A
 *
 */
#include <stdio.h>
void set(int arr[],int size)
{
    for(int i = 0; i < size; i++){
        arr[i] = 0;
    }
}
int main()
{
    int bit[26];
    set(bit,26);
    char ch;
    int count = 0;
    char str[1001];
    scanf("%[^\n]s",str);
    for(int i = 1; str[i] != '}'; i++){
        ch = str[i];
        if((ch >= 97 && ch < 123) && bit[ch-97] == 0)
            bit[ch-97] = 1;
    }
    for(int i = 0; i < 26; i++){
        if(bit[i] == 1)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
