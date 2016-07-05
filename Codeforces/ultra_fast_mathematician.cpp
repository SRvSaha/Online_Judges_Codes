/*
 *  @author     : SRvSaha
 *  Filename    : ultra_fast_mathematician.c
 *  Timestamp   : 09:10 PM 05-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/61/A
 *
 */
 #include <iostream>
 #include <stdio.h>
 char _xor(char p, char q)
 {
    if(p == q){
        return '0';
    }
    else
        return '1';
 }
 int main()
 {
    char str1[101];
    char str2[101];
    char output[101];
    std::cin>>str1;
    std::cin>>str2;
    int i = 0;
    for(; str1[i] != '\0'; i++){
        output[i] = _xor(str1[i],str2[i]);
    }
    output[i] = '\0';
    printf("%s\n",output);
    return 0;
 }
