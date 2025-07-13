class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int max = 1;
        int maxSum=0;
        int m=nums[0];


        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                max++;
            }
            else if(nums[i]>nums[i-1]){
                max=1;
                
            }
            if(maxSum<max){
                maxSum=max;
                m = nums[i];
            }
        }
        return m;
    }
};