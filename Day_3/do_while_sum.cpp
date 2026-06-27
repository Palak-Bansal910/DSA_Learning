#include<iostream>
using namespace std;

int main(){
    int n;
    cin>> n;
    cout<<endl;
    int sum = 0;
    int i = 1;
    do{ 
        sum = sum + i;
        i++;
    }while(i <= n);
    cout << "Sum: " << sum << endl;
}