class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>arr;
        int i=0;
        int j=1;
        arr.push_back(nums[0]);
        while(j<nums.size()){
            if(nums[j]==nums[i]){
                j++;
            }else{
                arr.push_back(nums[j]);
                i=j;
                j++;
            }
        }
        nums = arr;
        return arr.size();
    }
};