/*
*   @author      : SRvSaha
*   Filename     : faded_palindromes.c
*   Timestamp    : 19:30 06-September-2016 (Tuesday)
*   Description  : SEPT LONG CODECHEF
*   Link         : https://www.codechef.com/SEPT16/problems/LEXOPAL
*
*/
#include <stdio.h>
#include <string.h>
#define CIN(n) scanf("%d",&n);
#define COUT(n) printf("%d\n",n);

int main()
{
    int T;
    int start,end;
    int flag;
    char string[12346];
    CIN(T)
    while(T--){
        scanf("%s",string);
        start = 0;
        flag = 0;
        end = strlen(string) - 1;
        while(start <= end){
            if(string[start] == string[end]){
                if(string[start] == '.' && string[end] == '.'){
                    string[start] = 'a';string[end]= 'a';
                }
            }
            else{
                if(string[start] == '.' || string[end] == '.'){
                    if(string[start] == '.')
                        string[start] = string[end];
                    else
                        string[end] = string[start];
                }
                else{
                    flag = 1;
                    printf("-1\n");
                    break;
                }
            }
            start++;
            end--;
        }
        if(flag == 0){
            printf("%s\n",string);
        }
    }
    return 0;
}
