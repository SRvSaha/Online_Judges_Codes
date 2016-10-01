/*
*   @author      : SRvSaha
*   Filename     : print_hackerearth.cpp
*   Timestamp    : 20:20 01-October-2016 (Saturday)
*   Description  :
*   Link         : https://www.hackerearth.com/september-circuits/algorithm/print-hackerearth/
*
*/
#include <stdio.h>
#define CIN(n) scanf("%d",&n);
#define COUT(n) printf("%d\n",n);

int main()
{
    int n;
    CIN(n);
    char str[n+1];
    scanf("%s",str);
    int freq[] = {2,2,1,1,2,2,1}; // Kinda hashmap for h,a,c,k,e,r,t
    int times[] = {0,0,0,0,0,0,0};
    for(int i = 0; str[i] != 0; i++){
        switch(str[i]){
            case 'h':
                times[0]++;
                break;
            case 'a':
                times[1]++;
                break;
            case 'c':
                times[2]++;
                break;
            case 'k':
                times[3]++;
                break;
            case 'e':
                times[4]++;
                break;
            case 'r':
                times[5]++;
                break;
            case 't':
                times[6]++;
                break;
        }
    }
    int repeat[7];
    for(int i = 0; i < 7; i++){
        repeat[i] = times[i]/freq[i];
    }
    int min = repeat[0];
    // COUT(min);
    for(int i = 1; i < 7; i++){
        if(repeat[i] < min){
            // COUT(repeat[i]);
            min = repeat[i];
        }
    }
    COUT(min);
    return 0;
}
