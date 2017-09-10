/*
 *  @author     : SRvSaha
 *  Filename    : petya_and_strings.cpp
 *  Timestamp   : 6.21 PM  01-JUL-2016
 *  Desctiption : http://codeforces.com/problemset/problem/339/A
 */

#include <stdio.h>
 #include <iostream>
 #include <algorithm>
 #include <cstring>
int main(){
    char input[101];
    scanf("%s",input);
    int temp_arr[50];
    int j = 0;
    for(int i = 0; input[i] != '\0'; i++){
        if (input[i] != '+'){
            temp_arr[j] = input[i];
            j++;
        }
    }
    std::sort(temp_arr,temp_arr+j);
    for(int i = 0; i < j; i++){
        if(i != j-1){
            printf("%c+",temp_arr[i]);
        }
        else
            printf("%c\n",temp_arr[i]);
    }
    return 0;
}
