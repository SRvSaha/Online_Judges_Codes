#include <iostream>
using namespace std;
int main(){
    int n;
    bool flag = false;
    cin>>n;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0){
            flag = true;
            break;
        }
    }
    if(!flag)
        cout<<"Prime";
    else
        cout<<"Not Prime";
    cout<<endl;
    return 0;
}