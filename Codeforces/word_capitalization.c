/*
 *  @author     : SRvSaha
 *  Filename    : word_capitalization.c
 *  Timestamp   : 3:31 PM 03-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/281/A
 *
 */
 #include <stdio.h>
 int main()
 {
    char word[1001];
    scanf("%s",word);
    if(word[0] >=97 && word[0] < 123){
        word[0] -= 32;
    }
    printf("%s\n",word);
    return 0;
 }
