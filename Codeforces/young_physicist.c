/*
 *  @author     : SRvSaha
 *  Filename    : young_physicist.c
 *  Timestamp   : 11:18 PM 07-JUL-2016
 *  Description : http://codeforces.com/problemset/problem/69/A
 *
 */
#include <stdio.h>
 int main()
 {
    int x,y,z;
    x = y = z = 0;
    int x_temp,y_temp,z_temp;
    int n;
    scanf("%d",&n);
    while(n--){
        scanf("%d%d%d",&x_temp,&y_temp,&z_temp);
        x += x_temp;
        y += y_temp;
        z += z_temp;
    }
    if(x== 0 && y == 0 && z == 0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
 }
