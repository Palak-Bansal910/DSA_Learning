#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 5;
    int k = 5;
    vector<int> arr(n);
    cout<<"Enter elements of the array: "<<endl;
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++){
        arr[i] = arr[i] * k;
        cout<<arr[i]<<" ";
       
    }
    cout<<endl;
    return 0;
}