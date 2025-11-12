class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int arr=0;
        for(int i=0;i<nums.size();i++){
            arr = arr^nums[i];
        }
        return arr;
    }
};