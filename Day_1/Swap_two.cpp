#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<< "Enter the value of a: ";
    cin>> a;
    cout<<"\nEnter the value of b: ";
    cin>>b;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout<< "A:" << a << "\nB:" << b;
    return 0;
}