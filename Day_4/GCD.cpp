#include<iostream>
using namespace std;

int findGCD(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int GCD(int a, int b, int c){
    int gcd = findGCD(a,b);
    return findGCD(gcd, c);
}
int findLCM(int a, int b){
    return (a * b) / findGCD(a, b);
}
int LCM(int a, int b, int c){
    int lcm = findLCM(a,b);
    return findLCM(lcm, c);
}
int main(){
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int gcd = findGCD(num1, num2);
    cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << endl;
    
    int lcm = findLCM(num1, num2);
    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm << endl;
    
    int gcd3 = GCD(num1, num2, num3);
    cout << "GCD of " << num1 << " and " << num2 << " and " << num3 << " is: " << gcd3 << endl;

    int lcm3 = LCM(num1, num2, num3);
    cout << "LCM of " << num1 << " and " << num2 << " and " << num3 << " is: " << lcm3 << endl;

    return 0;
}