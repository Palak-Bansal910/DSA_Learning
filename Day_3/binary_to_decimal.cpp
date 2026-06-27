#include<iostream>
using namespace std;

int binaryToDecimal(int n){
    int ans = 0;
    int i = 1;
    bool flag = false;
    for(int i = 1; i <= n; i *= 2){
        if(i != 1 || i != 0){
            flag = true;
        }
    }
    if(flag){
        cout<<"Enter a binary number."<<endl;
        return 0;
    }
    while(n != 0){
        int digit = n % 10;
        ans = ans + digit * i;
        n = n /10;
        i = i * 2;
    }
 
    return ans;
}
int main(){
    int n;
    cout<<"Enter a binary number: ";
    cin>>n;
    cout<<"Ans: "<< binaryToDecimal(n)<<endl;
}