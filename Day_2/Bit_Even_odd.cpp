#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    /*int odd = 0;
    int even = 0;
    for(int i = 1;i <= n; i++){
        if((i & 1) == 0){
            even++;
        }else{
            odd++;
        }
    }
    */
    int odd = n - (n/2);
    int even = n/2;
    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;
    return 0;
}