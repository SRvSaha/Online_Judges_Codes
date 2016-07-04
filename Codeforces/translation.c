/*
 *  @author     : SRvSaha
 *  Filename    : translation.c
 *  Timestamp   : 05:56 PM 04-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/41/A
 *
 */
 #include <stdio.h>
 #include <string.h>
 int main()
 {
    char s[101];
    char t[101];
    scanf("%s",s);
    scanf("%s",t);
    int i = 0, j = strlen(t) - 1;
    for(; i < strlen(s) ; i++){
        if(s[i] == t[j]){
            j--;
        }
        else
            break;
    }
    if(i == strlen(s)){
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
 }
