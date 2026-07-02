#include <vector>
#include <iostream>
using namespace std;
int findMin(vector<int>& nums) {
        int n = nums.size();
        int left = 0; 
        int right = n -1;
        if(nums[0] < nums[right]) return nums[0];
        while(left < right){
            int mid = (left + right)/2;
            if(nums[mid] > nums[n-1]){
                left = mid + 1;
            }else{
                right = mid;
            }
        }
        return left;
    }
int search(vector<int>& nums, int target) {
    int min = findMin(nums);
    int start = 0;
    int end = nums.size() - 1;
    while(start <= min){
        int mid = (start + min)/2;
        if(nums[mid] == target){
            return mid;
        }else if(nums[mid] < target){
            start = mid + 1;
        }else{
            min = mid - 1;
        }
    }
    min = findMin(nums);
    while(min <= end){
        int mid = (min + end)/2;
        if(nums[mid] == target){
            return mid;
        }else if(nums[mid] < target){
            min = min + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
    vector<int> nums = {4,5,6,7,0,1,2};
    int target = 6;
    cout << search(nums, target) << endl;
    return 0;
}