#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int reverse = 0;
    do{
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }while(n > 0);
    cout << "Reverse: " << reverse << endl;
}