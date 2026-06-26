#include<iostream>
using namespace std;
int Exponentiation(int a, int b){
    int result = 1;
    bool flag = false;
    if(b == 0){
        return 1;
    }
    if(b < 0){
        b = b*-1;
        flag = true;
    }
    for(int i = 0; i < b; i++){
        result = result * a;
    }
    if(flag){
        return 1/ result;
    }
    return result;
}
int main(){
    cout << Exponentiation(2, 10) << endl;
    return 0;
}