#include <iostream>
using namespace std;

void swap_by_value(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap_by_reference(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap_by_pointer(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void swap_without_third_var(int a, int b){
    b = a + b;
    a = b - a;
    b = b - a;
}
int main(){
    int a, b;
    cin>>a>>b;

    cout<<"Before Swapping a = "<<a<<" b = "<<b<<endl;
    swap_by_value(a, b);
    swap_by_pointer(&a, &b);
    swap_by_reference(a, b);
    swap_without_third_var(a, b);
    cout<<"After Swapping a = "<<a<<" b = "<<b<<endl;
}