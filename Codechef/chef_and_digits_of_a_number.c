/*
*   @author      : SRvSaha
*   Filename     : chef_and_digits_of_a_number.c
*   Timestamp    : 19:37 02-September-2016 (Friday)
*   Description  :
*   Link         :
*
*/
#include <stdio.h>
#define CIN(n) scanf("%d",&n);
#define COUT(n) printf("%d\n",n);

char num[100000+1];
int main()
{
    int count1,count0;
    int T;
    CIN(T)
    while(T--)
    {
        count0 = 0;
        count1 = 0;
        scanf("%s",num);
        for(int i = 0 ; num[i] != '\0'; i++){
            num[i] = num[i] - '0';
            if(num[i] == 0)
                count0++;
            else
                count1++;
        }
        if((count0==1) || (count1==1)){
            printf("Yes\n");
        }
        else
            printf("No\n");
    }
    return 0;
}
