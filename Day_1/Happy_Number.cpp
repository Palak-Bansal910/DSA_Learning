#include <iostream>
#include <unordered_set>
using namespace std;
bool isHappyNumber(int n){
        int sum = 0;
        unordered_set<int> visited;
        do{
            if(visited.count(n)){
                return false;
            }
            visited.insert(n);
            sum = 0;
            cout<< "Current n is: "<< n << endl;
            while(n > 0){
            int a = n % 10;
            n = n / 10;
            sum = sum + (a*a);
            }
            n = sum;
        }while(sum != 1);

        return sum == 1;   
}
int main(){
    int n;
    cout<<"Enter a number n: ";
    cin>>n;
    bool result = isHappyNumber(n);
    cout<<"The result is: "<<result<< endl;
}