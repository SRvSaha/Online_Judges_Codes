/*
 *  @author     : SRvSaha
 *  Filename    : tram.c
 *  Timestamp   : 10.12 AM 03-JUL-2016
 *  Desctiption : http://codeforces.com/problemset/problem/116/A
 */
 #include <stdio.h>
 int main()
 {
    int a[1000];
    int b[1000];
    int total = 0,new_total = 0;
    int n,i = 0;
    scanf("%d",&n);
    while(i < n){
        scanf("%d %d",&a[i],&b[i]);
        i++;
    }
    for(int i = 0; i < n ; i++){
        new_total += b[i] - a[i];
        if(total < new_total){
            total = new_total;
        }
    }
    printf("%d\n",total);
    return 0;
 }
