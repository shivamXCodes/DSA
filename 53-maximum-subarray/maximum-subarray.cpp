class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Max = 0;
        int GlobalMax=nums[0];
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0;i<nums.size();i++){
            Max = Max+nums[i];
            GlobalMax = max(Max,GlobalMax);
            if(Max<0){
                Max = 0;
            }
        }
        return GlobalMax;
    }
};