#include<iostream>
using namespace std;

bool isPowerOfThree(int n){
    if (n <= 0) return false;
    while (n%3 == 0){
        n = n/3;
    }
    return n == 1;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<endl;
    if(isPowerOfThree(n)){
        cout<<n<<" is a power of three."<<endl;
    }
    return 0;
}