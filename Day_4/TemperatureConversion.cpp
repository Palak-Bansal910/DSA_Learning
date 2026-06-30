#include<iostream>
using namespace std;

int ConvertToFarenheit(int celsius){
    return (celsius * 9/5) + 32;
}
int main(){
    int celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    cout << "Temperature in Farenheit: " << ConvertToFarenheit(celsius) << endl;
    
    return 0;
}