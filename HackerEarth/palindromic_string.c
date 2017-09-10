/*
 * @author     : SRvSaha
 * Filename    : palindromic_string.c
 * Timestamp   : 8.34 PM 30-Jun-2016
 * Description : https://www.hackerearth.com/problem/algorithm/palindrome-check-2/
 *
 */
 #include <stdio.h>
 #include <string.h>
 int main(){
    char string[101];
    int i, j;
    scanf("%s",string);
    i = 0;
    j = strlen(string)-1;
    while(i <= j){
        /*
            Overall O(n) : But checking is done upto half of the string in worst case.
        */
        if( string[i] == string[j]){
            i++;
            j--;
        }
        else
            break;
    }
    if( j == i-2 || j == i-1 ) // j = i-2 for strings of odd length, j = i-1 for strings of even len
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
 }
