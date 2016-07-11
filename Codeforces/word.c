/*
 *  @author     : SRvSaha
 *  Filename    : translation.c
 *  Timestamp   : 09:21 AM 11-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/59/A
 *
 */
#include <stdio.h>
#include <stdlib.h>
char to_upper(char ch)
{
    ch = ch - 32;
    return ch;
}
char to_lower(char ch)
{
    ch = ch + 32;
    return ch;
}
int is_upper(char ch)
{
    int result = ch >= 65 && ch < 91 ? 1 : 0;
    return result;
}
int is_lower(char ch)
{
    int result = ch >= 97 && ch < 123 ? 1 : 0;
    return result;
}
char* correct_words(char* correct_word,char* word)
{
    char ch;
    char* res = NULL;
    int i = 0;
    int count_lower = 0, count_upper = 0;
    for(int i = 0; word[i] != '\0'; i++){
        if(word[i]>=65 && word[i] < 91){
            count_upper += 1;
        }
        else
            count_lower += 1;
    }
    if(count_upper > count_lower){
        for(; word[i] != '\0'; i++){
            ch = word[i];
            if(is_lower(ch)){
                ch = to_upper(ch);
            }
            correct_word[i] = ch;
        }
    }
    else{
        for(i = 0; word[i] != '\0'; i++){
            ch = word[i];
            if(is_upper(ch)){
                ch = to_lower(ch);
            }
            correct_word[i] = ch;
        }
    }
    correct_word[i] = '\0';
    res = correct_word;
    return res;
}
int main()
{
    char word[101];
    char* correct_word = (char*)malloc(101); // Dynamically allocating else function will return a dangling pointer. This is now in heap section
    char* result = NULL;
    scanf("%s",word);
    // correct_word(word);
    result = correct_words(correct_word,word);
    printf("%s\n",result);
    free(correct_word);// The returned string will get deallocated here.
    return 0;
}
