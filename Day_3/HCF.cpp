#include<iostream>
using namespace std;

int findHCF(int a, int b){
    int hcf = 1;
    for(int i = 1; i <= a && i <= b; i++){
        if(a % i == 0 && b % i == 0){
            hcf = i;
        }
    }
    return hcf;
}
int findLCM(int a, int b){
    return (a * b) / findHCF(a, b);
}

int main(){
    int a = 12, b = 18;
    cout << "HCF of " << a << " and " << b << " is: " << findHCF(a, b) << endl;
    cout << "LCM of " << a << " and " << b << " is: " << findLCM(a, b) << endl;
    return 0;
}