#include <iostream>
using namespace std;

int main(){
    int i, j, N;
    cin>>N;
    for(int i = 1; i <= N; i++){
        for(int j = 1; j <= (2*i - 1); j++){
            cout<<j;
        }
        cout<<endl;
    }
    for(int i = N-1; i >= 1; i--){
        for(int j = 1; j <= (2*i - 1); j++){
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}