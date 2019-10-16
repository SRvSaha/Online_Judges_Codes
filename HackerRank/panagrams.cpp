/*
* @author: srvsaha
* Link: https://www.hackerrank.com/challenges/pangrams/
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int arr[26];
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s;
    getline(cin, s);
    bool flag = true;
    for(int i = 0; i < s.length(); i++){
        if(s[i] >=65 && s[i] <91){
            arr[s[i]-65] = 1;
        }
        else if (s[i] >=97 && s[i] < 123){
            arr[s[i] - 97] = 1;
        }
    }
    for(int i = 0; i < 26; i++){
        if(arr[i] == 0){
            flag = false;
            break;
        }
    }
    if(flag)
        cout<<"pangram"<<endl;
    else
        cout<<"not pangram"<<endl;
    return 0;
}

