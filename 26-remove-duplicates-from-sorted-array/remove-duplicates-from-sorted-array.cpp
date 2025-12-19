class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int i=0;
        int curr=nums[i++];
        int j = 1;

        while(j<nums.size()){
            if(nums[j] != curr ){
                nums[i] = nums[j];
                curr = nums[i];
                i++;
            }
            j++;
        }
        return i;
    }
};