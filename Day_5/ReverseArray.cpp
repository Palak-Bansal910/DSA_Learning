#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr){
    int start = 0;
    int end = arr.size() -1;
    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main(){
    int n = 5;
    vector<int> arr(n);
    cout<<"Enter elements of the array: "<<endl;
    for(int i = 0; i < n; i++){
        cin>> arr[i];
    }
    reverseArray(arr);
    cout<<"Reversed array: ";
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}