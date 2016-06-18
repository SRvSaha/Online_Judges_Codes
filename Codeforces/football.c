/*
 * @author     : SRvSaha
 * Filename    : football.c
 * Timestamp   : 20:50  18-June-2016 (Saturday)
 * Description : http://codeforces.com/problemset/problem/96/A
 *
 */
// Complexity : O(n)
#include <stdio.h>
#include <string.h> // for strlen
int main() {
    int i = 0,count;
    char string[100];
    scanf("%s",string);
    while(i < strlen(string)){
        count = 1;
        if(string[i] == '0'){ //Starting with 0 and 0 following
            while(string[++i] == '0' && i < strlen(string))
                count++;
            if(count >= 7)
                break;
        }
        else{ // Starting with 1 and 1 following
            while(string[++i] == '1' && i<strlen(string))
                count++;
            if(count >= 7) // Since we don't need to check if count is >= 7.
                break;
        }
    }
    if(count >= 7) //Dangerous String
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
