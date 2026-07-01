#include<iostream>
#include<vector>

using namespace std;

int ceilValue(vector<int> arr, int target){
    int left = 0;
    int right = arr.size() -1;
    int idx = -1;
    while(left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] == target){
            idx = mid;
            left = mid + 1;
        }else if(arr[mid] < target){
            left = mid + 1;
        }else{
            right = mid - 1;
        }
    }
    return idx;
}
int main(){
    vector<int> arr = {1, 2, 8, 10, 10, 12, 19};
    int target = 10;
    cout << ceilValue(arr, target) << endl;
    return 0;
}