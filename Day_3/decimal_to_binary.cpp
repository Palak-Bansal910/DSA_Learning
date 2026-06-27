#include<iostream>
using namespace std;

int decimalToBinary(int n){
    int ans = 0;
    int i = 1;
    while(n != 0){
        int bit = n % 2;
        ans = ans + bit * i;
        n = n / 2;
        i = i * 10;
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter a decimal number: ";
    cin >> n;
    cout << "Binary: " << decimalToBinary(n) << endl;
}