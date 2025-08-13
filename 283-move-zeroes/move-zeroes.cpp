class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int size = nums.size();
        int j=0;

        // for(int k:nums){
        //     if(k!=0){
        //         continue;
        //     }else{
        //         swap()
        //     }
        // }
        // while(j<size){
        //     nums[j]=0;
        //     j++;
        // }
        for(int i=0;i<size;i++){
            if(nums[i]!=0){
                std::swap(nums[i],nums[j]);
                j++;
            }
        }

    }
};