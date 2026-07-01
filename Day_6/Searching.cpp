#include<iostream>

using namespace std;
int BinarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    while(start <= end){
        int mid = (start + end) / 2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 45, 56, 67, 78, 89, 99};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 23;
    int result = BinarySearch(arr, size, key);
    if(result != -1){
        cout<<"Element found at index: "<<result<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}