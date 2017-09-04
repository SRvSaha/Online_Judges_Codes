#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;
int main(){
    int count = 0;
    int low;
    int high;
    cin>>low;
    cin>>high;
    if (low>high){
        swap(high, low);
    }
    int low_ = sqrt(low);
    int high_ = sqrt(high);
    for(int i = low_; i <= high_; i++){
        if(i*i >= low && i*i <= high)
            cout<<i*i<<" ";
    }
}