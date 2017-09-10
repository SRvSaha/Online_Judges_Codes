/*
 *  @author     : SRvSaha
 *  Filename    : boy_or_girl.c
 *  Timestamp   : 09.30 PM 03-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/236/A
 *
 */
 #include <stdio.h>
 int main()
 {
    char username[101];
    scanf("%s",username);
    int bool[26];
    int count = 0;
    for(int i = 0; i < 26; i++){
        bool[i] = 0; // OFF all bits.
    }
    for(int i = 0; username[i] != '\0'; i++){
        username[i] -= 'a';
        if(bool[username[i]] != 1){
            bool[username[i]] = 1;
        }
    }
    for(int i = 0; i < 26; i++){
        if(bool[i] == 1){
            count++;
        }
    }
    if(count%2 == 0){
        printf("CHAT WITH HER!\n");
    }
    else{
        printf("IGNORE HIM!\n");
    }
    return 0;
 }
