/*
* @author : SRvSaha
* b++.c
* 17-June-2016 (Friday)
* Description :http://codeforces.com/problemset/problem/282/A
*
*/
#include <stdio.h>
int main(){
    int test_case,X = 0;
    char expr[4];
    scanf("%d",&test_case);
    while(test_case--){
        scanf("%s",expr);
        if(expr[0]=='+' || (expr[0]=='X' && expr[1]=='+')){
            X = X+1;
        }
        else if(expr[0]=='-' || (expr[0]=='X' && expr[1] == '-')){
            X = X-1;
        }
        else{
            continue;
        }
    }
    printf("%d\n",X);
    return 0;
}
