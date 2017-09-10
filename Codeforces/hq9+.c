/*
 *  @author     : SRvSaha
 *  Filename    : hq9+.c
 *  Timestamp   : 02:54 PM 03-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/133/A
 *
 */
 #include <stdio.h>
 int main()
 {
    char program[101];
    scanf("%s",program);
    int i = 0;
    for(; program[i] != '\0'; i++){
        if(program[i] == 'H' || program[i] == 'Q' || program[i] == '9'){
            break;
        }
    }
    if(program[i] != '\0'){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
 }
