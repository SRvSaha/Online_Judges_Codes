#include <iostream>

using namespace std;

int factorial(int n){
    if(n == 0)
        return 1;
    else
        return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    int fact = 1;
    cout<<factorial(n)<<endl;
    for(int i = 1; i <= n; i++){
        fact = fact*i;
    }
    cout<<fact<<endl;
    return 0;
}