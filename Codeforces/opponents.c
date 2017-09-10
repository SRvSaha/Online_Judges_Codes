/*
 *  @author     : SRvSaha
 *  Filename    : opponents.c
 *  Timestamp   : 11:10 AM 07-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/688/A
 *
 */
#include <stdio.h>
 int main()
 {
    char students[101];
    int num_of_students;
    int days;
    int count = 0;
    int max = 0, new_max;
    scanf("%d %d",&num_of_students,&days);
    while(days--){
        scanf("%s",students);
        int i = 0;
        for(; students[i] != '\0'; i++){
            if(students[i] == '0'){
                count++;
                new_max = count;
                max = new_max > max ? new_max : max;
                break;
            }
        }
        if(students[i] == '\0')
            count = 0;
    }
    printf("%d\n",max);
 }
