#include<iostream>
#include<vector>
using namespace std;
int rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k = k % n;
    for(int i = 0; i < k; i++){
        int last = nums[n -1];
        for(int j = n -1; j > 0; j--){
            nums[j] = nums[j -1];
        }
        nums[0] = last;
    }
    return 0;
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;    
    rotate(nums, k);
    for(int i = 0; i < nums.size(); i++){
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}