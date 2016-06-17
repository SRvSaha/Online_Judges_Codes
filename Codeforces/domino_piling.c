
/*
* @author : SRvSaha
* domino_piling.c
* 17-Jul-2016
* Description: http://codeforces.com/problemset/problem/50/A
*
*/
#include <stdio.h>
#define DOMINO_LEN 2
#define DOMINO_BREADTH 1
int main(){
    int length,breadth;
    int output;
    scanf("%d %d",&length,&breadth);
    if(length >= DOMINO_LEN && breadth >= DOMINO_BREADTH){
        if(length % DOMINO_LEN == 0){
            output = length/DOMINO_LEN * breadth/DOMINO_BREADTH;
        }
        else {
            //Case when length % DOMINO_LEN = 1. Then by rotating the domino it can
            // be placed . So using the breadth at that time.
            output = (length/DOMINO_LEN * breadth/DOMINO_BREADTH) + breadth/DOMINO_LEN;
        }
    }else {
            //Case when length < DOMINO_LEN. So only the rotated part is the answer
            output = (length/DOMINO_LEN * breadth/DOMINO_BREADTH) + breadth/DOMINO_LEN;
        }
        printf("%d\n",output);
    return 0;
}
