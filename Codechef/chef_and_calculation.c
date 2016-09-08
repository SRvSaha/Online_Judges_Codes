/*
*   @author      : SRvSaha
*   Filename     : chef_and_calculation.c
*   Timestamp    : 22:42 06-September-2016 (Tuesday)
*   Description  : SEPT CODECHEF LONG
*   Link         : https://www.codechef.com/SEPT16/problems/RESCALC
*
*/
#include <stdio.h>
#include <string.h>
#define CIN(n) scanf(" %d",&n);
#define COUT(n) printf("%d\n",n);

int main()
{
    int T;
    int N;
    int C;
    int cookies[101];
    int freq_cookie[7];
    int type;
    int type_count = 0;
    int point;
    int max,min;

    int chef;
    CIN(T)
    while(T--){


        max = 0;
        chef =0;
        CIN(N)


        for(int k=1;k<=N;k++){
        for(int i = 1; i <= 6; i++)
            freq_cookie[i] = 0;

            type_count = 0;
            CIN(C)
            point = C;
            for(int i = 1; i <= C; i++){
                CIN(type)
                cookies[i] = type;
            freq_cookie[cookies[i]]++;

            }
            while(1){
                    min =100000000;
                    for(int i = 1; i <=6; i++){
                        if(freq_cookie[i] < min&&freq_cookie[i]!=0)
                            min = freq_cookie[i];
                    }
                    type_count=0;
                    for(int i = 1; i <=6; i++){
                        if(freq_cookie[i] != 0)
                            type_count++;
                    }
                    if(type_count == 4)
                        point += min;
                    else if(type_count == 5)
                        point += min*2;
                    else if (type_count == 6)
                        point += min*4;
                    else
                        break;
                    for(int i = 1; i <=6; i++){
                        if(freq_cookie[i] != 0)
                            freq_cookie[i] -= min;
                    }
            }
            if(point > max)
                max = point,chef = k;
            else if(point == max)
                chef = 0;

        }
        if(chef == 0)
            printf("tie\n");
        else{
            if(chef == 1)
                printf("chef\n");
            else
                printf("%d\n",chef);
        }
    }
    return 0;
}
