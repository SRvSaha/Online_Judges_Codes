#include <iostream>
using namespace std;

int fibonacci_reccursive(int n){
    if(n == 0 || n == 1)
        return 1;
    else
        return fibonacci_reccursive(n-1) + fibonacci_reccursive(n-2);
}
int main(){
    int n;
    int terms;
    int a = 1;
    int b = 1;
    cin>>n;
    cin>>terms;
    cout<<a<<" ";
    cout<<b<<" ";
    while((a+b) <= n){
        b = a + b;
        a = b - a;
        cout<<b<<" ";
    }
    cout<<endl;
    for(int i = 0; i < terms; i++)
        cout<<fibonacci_reccursive(i)<<" ";
    cout<<endl;
    return 0;
}