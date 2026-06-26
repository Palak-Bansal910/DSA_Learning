#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    cout<<endl;
    int sum = 0;
    while(n > 0){
        int a = n % 10;
        n = n /10;
        sum = sum + a;
    }
    cout<< "The sum of the digits is: "<<sum<<endl;
}