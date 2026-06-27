#include<iostream>
using namespace std;
 void isPrime(int n){
    int count=0;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            count++;
            break;
        }

    }
    if (count==0){
        cout<<n<<" is a prime number"<<endl; 
    }
    else{
        cout<<n<<" is not a prime number"<<endl;
    }
 }
 int main(){
    int n;
    cout<<"enter a number: ";
    cin>>n;
    isPrime(n);
    return 0;
    
 }