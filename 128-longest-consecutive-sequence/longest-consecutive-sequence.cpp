class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max = 1;
        int l = 1;
        if(nums.size()==0){
            return 0;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            if(nums[i]-nums[i-1]!=1){
            max = 1;
        }
        else if(nums[i]-nums[i-1]==1){
            max++;
        }
        if(l <max){
            l=max;
        }
        }
        return l;
    }
};