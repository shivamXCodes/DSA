class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max = 1;
        int globalMax = 1;
        if(nums.size()==0){
            return 0;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            else if(nums[i]-nums[i-1]==1){
                max++;
            }
            else{
                max=1;
            }
            if(globalMax<max){
                globalMax = max;
            }
        }
        return globalMax;
    }
};