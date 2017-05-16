/*
*   @author      : SRvSaha
*   Filename     : sock_merchant.cpp
*   Timestamp    : 01:34 18-October-2016 (Tuesday)
*   Description  : Use of Map (Unordered Map) , Iterator STL
*   Link         : https://www.hackerrank.com/challenges/sock-merchant
*
*/
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <climits>
#include <ctime>
#include <stack>
#include <queue>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <algorithm>
#include <utility>
#include <fstream>

#define FR freopen("input.txt", "r", stdin);
#define FW freopen("output.txt", "w", stdout);
#define CIN(n) scanf("%d",&n);
#define COUT(n) printf("%d\n",n);
#define log(x) log10(x)/log10(2)
#define mod 1000000007
const int inf=100000005;

/* BEGIN Timer */
#define CLOCK clock()
#define BEGIN_CLOCK clock_t _bx_ = clock();
#define END_CLOCK clock_t _ex_ = clock();
#define TOTAL_C (double)(_ex_ - _bx_)
#define TOTAL_T (TOTAL_C/CLOCKS_PER_SEC)
#define PRINT_CLOCK (printf("%2.3f\n",TOTAL_T));
/* END Timer */

typedef unsigned long long ULL;
typedef long long LL;
using namespace std;


int main()
{
    int n;
    int c;
    int count = 0;
    CIN(n)
    unordered_map<int,int> m;
    unordered_map<int,int>::iterator it;
    for(int i = 0; i < n; i++){
        CIN(c);
        if(m.find(c) == m.end()){
            m[c] = 1;
        }
        else{
            m[c] += 1;
        }
    }
    for(it=m.begin(); it != m.end(); it++){
        count += it->second / 2;
    }
    COUT(count)
    return 0;
}
