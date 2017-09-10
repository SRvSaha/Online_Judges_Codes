#include <iostream>
using namespace std;

int main(){
    int n;
    int rev=0;
    int cnt = 0;
    int sum = 0;
    int temp;
    cin>>n;
    while(n){
        temp = n%10;
        sum += temp;
        cnt++;
        rev = rev*10 + temp;
        n /=10;
    }
    cout<<rev<<endl;
    cout<<cnt<<endl;
    cout<<sum<<endl;
    return 0;
}