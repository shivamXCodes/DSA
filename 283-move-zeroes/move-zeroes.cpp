class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int count = 0;
        int j=0;
        
        for(int k:nums){
            if(k!=0){
                nums[j]=k;
                j++;
            }
        }
        while(j<size){
            nums[j]=0;
            j++;
        }
    }
};