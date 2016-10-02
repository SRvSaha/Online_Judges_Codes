/*
*   @author      : SRvSaha
*   Filename     : mishki_playing_games.c
*   Timestamp    : 11:01 02-October-2016 (Sunday)
*   Description  : O(n^2) to O(n) solution .!!! SEPTEMBER CIRCUITS 2016
*   Link         : https://www.hackerearth.com/september-circuits/algorithm/mishki-playing-games/
*
*/
#include <stdio.h>
#include <math.h>
#define CIN(n) scanf("%d",&n);
#define COUT(n) printf("%d\n",n);
#define log2(x) log10(x)/log10(2)

int main()
{
    int n,q;
    CIN(n);
    CIN(q);
    int sets[n];
    int first[n];
    int temp;
    int l,r;
    for(int i = 0; i < n; i++)
    {
        CIN(temp)
        sets[i] = temp;
        // fflush(stdin);
    }
    first[0] = 1; // 1 if A starts and 0 if B starts
    for(int i = 1; i < n; i++)
    {
        if((int)floor(log2(sets[i-1])) % 2 == 0){
            if(first[i-1])
                first[i] = 0;
            else
                first[i] = 1;
        }
        else
            first[i] = first[i-1];
    }
    //printf("%d\n",(int)floor(log2(8)));
    while(q--){
        CIN(l)
        l = l-1;
        CIN(r)
        r = r-1;
        int decide = (int)floor(log2(sets[r]));
        if(first[l] == 1){
            if(first[r] == 1){
                if(decide % 2 == 0)
                    printf("Mishki\n");
                else
                    printf("Hacker\n");
            }
            else{
                if(decide % 2 != 0)
                    printf("Mishki\n");
                else
                    printf("Hacker\n");
            }
        }
        else{
            if(first[r] == 1){
                if(decide % 2 != 0)
                    printf("Mishki\n");
                else
                    printf("Hacker\n");
            }
            else{
                if(decide % 2 == 0)
                    printf("Mishki\n");
                else
                    printf("Hacker\n");
            }
        }
    }
    return 0;
}
