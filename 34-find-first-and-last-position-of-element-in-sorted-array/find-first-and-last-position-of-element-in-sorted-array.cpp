class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> arr;
        int left = 0;
        int right = nums.size()-1;
        int mid  = (left+right)/2;
        int ans = -1;
        while(left<=right){
            if(nums[mid]==target){
                ans = mid;
                right = mid-1;
            }
            if(target>nums[mid]){
                left = mid+1;
            }if(target<nums[mid]){
                right = mid-1;
            }
            mid = (left+right)/2;
        }
        arr.push_back(ans);
        left = 0;
        right = nums.size()-1;
        mid  = (left+right)/2;
        ans = -1;
        while(left<=right){
            if(nums[mid]==target){
                ans = mid;
                left = mid+1;
            }
            if(target>nums[mid]){
                left = mid+1;
            }if(target<nums[mid]){
                right = mid-1;
            }
            mid = (left+right)/2;
        }
        arr.push_back(ans);
        return arr;
    }
};