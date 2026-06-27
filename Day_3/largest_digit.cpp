#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int largest_digit = 0;
    while(n > 0){
        int digit = n % 10;
        if(digit > largest_digit){
            largest_digit = digit;
        }
        n = n/10;
    }
    cout<<"Largest digit is: "<<largest_digit<<endl;
}