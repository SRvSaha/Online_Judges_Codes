/*
*   @author      : SRvSaha
*   Filename     : circular_array_rotation.c
*   Timestamp    : 16:23 17-October-2016 (Monday)
*   Description  : Rotation of Array based on Change of Index of Array || O(N) time
*   Link         : https://www.hackerrank.com/challenges/circular-array-rotation
*
*/
#include <stdio.h>
#include <math.h>
#define CIN(n) scanf("%d",&n);
#define COUT(n) printf("%d\n",n);
#define log(x) log10(x)/log10(2)

int arr[100005];
int ans[100005];
int main()
{
    int n,k,q;
    int m;
    int index;
    CIN(n)
    CIN(k)
    CIN(q)
    for(int i = 0; i < n; i++)
        CIN(arr[i])
    for(int i = 0; i < n; i++){
        index = (i+k)%n;
        ans[index] = arr[i];
    }
    while(q--){
        CIN(m);
        COUT(ans[m]);
    }
    return 0;
}
