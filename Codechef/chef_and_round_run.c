/*
*   @author      : SRvSaha
*   Filename     : chef_and_round_run.c
*   Timestamp    : 21:12 07-August-2016 (Sunday)
*   Description  : QUESTION-2 : CODECHEF AUGUST LONG CONSTEST || TLE O(n^2) :(
*   Must be solved in O(n) or O(nlogn)
*   Link         : https://www.codechef.com/AUG16/problems/CHEFRRUN
*
*/
#include <stdio.h>
#include <string.h> // for memset
// #include <time.h>
long A[100000]; // To hold all the tastiness level
int main()
{
    long T; // For the number of test cases
    long N; // Number of boxes of food
    long count = 0; // To count the number of magical boxes
    scanf("%ld",&T);
    long temp;
    // clock_t start_,end_,total_;
    while(T--){
        count = 0; // resetting count
        scanf(" %ld",&N);
        int visited[N];
        for(long i = 0; i < N; i++){ // Storing all the tastiness values
            scanf("%ld",&A[i]);
        }
        // start_ = clock();
        for(long i = 0; i < N; i++){
            memset(visited,0,sizeof(visited));
            temp = i;
            visited[temp] = 1;
            temp = (temp + A[temp] + 1) % (N);
            while(visited[temp] != 1 && temp != i){
                visited[temp] = 1;
                temp = (temp + A[temp] + 1) % N;
            }
            if(visited[temp] == 1 && temp == i)
                count += 1;
        }
        // end_ = clock();
        // total_ = (double)(end_ - start_) / CLOCKS_PER_SEC;
        // printf("Time : %f\n",total_);
        printf("%ld\n",count);
    }
    return 0;
}
