/*
 *  @author     : SRvSaha
 *  Filename    : panagram.c
 *  Timestamp   : 03:05 PM 11-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/520/A
 *
 */
#include <stdio.h>
void set(int arr[], int value, int size)
{
    for(int i = 0; i < size; i++){
        arr[i] = value;
    }
}
int main()
{
    int n;
    int bit[26];
    set(bit,0,26);
    char str[101];
    scanf("%d",&n);
    scanf("%s",str);
    char ch;
    for(int i = 0; str[i] != '\0'; i++){
        ch = str[i];
        if((ch >= 65 && ch < 91) && bit[ch - 65] == 0)
            bit[ch - 65] = 1;
        if((ch >=97 && ch < 123) && bit [ch - 97] == 0)
            bit[ch - 97] = 1;
    }
    for(int i = 0; i < 26; i++){
        if(bit[i] == 0){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}
