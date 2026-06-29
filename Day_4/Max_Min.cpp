#include<iostream>
using namespace std;

int Compare(int a, int b){
    if(a > b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Maximum value is: " << Compare(34,12) << endl;
    cout << "Minimum value is: " << Compare(45,23) << endl;
    return 0;
}