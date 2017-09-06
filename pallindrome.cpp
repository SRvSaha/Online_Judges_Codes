#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool approach_1(int n){
    int rev = 0;
    int num = n;
    int temp;
    while(n){
        temp = n%10;
        rev = rev*10 + temp;
        n /= 10;
    }
    if(rev == num)
        return true;
    else
        return false;
}
bool approach_2(int n){
    // string num = to_string(n); Works in C++ 11
    ostringstream ss;
    bool flag=true;
    ss<<n;
    string num = ss.str();
    int high = num.length() - 1;
    int low = 0;
    while(high >= low){
        if(num[low++] != num[high--]){
            flag = false;
            break;
        }
    }
    if(flag)
        return true;
    else
        return false;

}
int main(){
    int n;
    cin >> n;
    if(approach_1(n)){
        cout<<"Pallindrome";
    }
    else
        cout<<"Not Pallindrome";
    cout<<endl;
    if(approach_2(n)){
        cout<<"Pallindrome";
    }
    else
        cout<<"Not Pallindrome";
    cout<<endl;
    return 0;
}