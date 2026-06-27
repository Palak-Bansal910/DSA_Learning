#include<iostream>
using namespace std;
void isPrime(int n){
    for(int i = 2; i <= n; i++){
        bool isPrimeNumber = true;
        for(int j = 2; j * j <= i; j++){
            if(i % j == 0){
                isPrimeNumber = false;
                break;
            }
        }
        if(isPrimeNumber){
            cout << i << " ";
        }
    }
}

int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    isPrime(n);
    return 0;
    
 }