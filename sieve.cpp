#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
bool is_prime[1000000];
std::vector<int> primes;
void sieve(){
    is_prime[0] = false;
    is_prime[1] = false;
    for(int i = 2; i*i <= 1e5; i++){
        if(is_prime[i]){
            for(int j = i*2; j <= 1e5; j+= i){
                is_prime[j] = false;
            }
        }
    }
    for(int i = 2; i <= 1e5; i++){
        if(is_prime[i])
            primes.push_back(i);
    }
}
int main(){
    memset(is_prime, true, sizeof(is_prime));
    // For multiple values
    int t,n;
    cin>>t;
    sieve();
    while(t--){
        cin>>n;
        //binary search
        // int low = 0, high = primes.size()-1;
        // while(low<high){
        //     int mid = (low + high + 1)/2;
        //     if(primes[mid] > n){
        //         high = mid - 1;
        //     }
        //     else{
        //         low = mid;
        //     }
        // }
        // cout<<n-primes[low]<<std::endl;

        //linear search
        int prev;
        for(int i = 0; i < primes.size(); i++){
            if(primes[i] > n)
                break;
            prev = primes[i];
        }
        cout<<n-prev<<std::endl;
    }
    return 0;
}