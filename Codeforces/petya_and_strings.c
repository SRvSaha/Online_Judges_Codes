/*
 *  @author    : SRvSaha
 *  Filename    : petya_and_strings.c
 *  Timestamp : 10.52 AM  01-JUL-2016
 *  Desctiption : http://codeforces.com/problemset/problem/112/A
 */

#include <stdio.h>
int main()
{
    char string1[101];
    char string2[101];
    int i = 0;
    scanf("%s",string1);
    scanf("%s",string2);
    for( ; string1[i] != '\0'; i++){
        if (string1[i] == string2[i] || string1[i] == string2[i] + 32 || string1[i] == string2[i] - 32){
            continue;
        }
        else{
            if (((string1[i]>=65 && string1[i] <91) && (string2[i]>=65 && string2[i]< 97))
                ||((string1[i]>=97 && string1[i]< 123)&&(string2[i]>=97 && string2[i]< 123))){
                if(string1[i] > string2[i])
                    printf("1\n");
                else
                    printf("-1\n");
            }
            else if ((string1[i]>=65 && string1[i] <91) && (string2[i]>=97 && string2[i]< 123)){
                string1[i] += 32;
                if(string1[i] > string2[i])
                    printf("1\n");
                else
                    printf("-1\n");
            }
            else{
                string2[i] += 32;
                if(string1[i] > string2[i])
                    printf("1\n");
                else
                    printf("-1\n");
            }
            break;
        }
    }
    if(string1[i] == '\0' )
        printf("0\n");
    return 0;
}
