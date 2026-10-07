class Solution {
    public void moveZeroes(int[] nums) {
        int count = 0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]==0){
                count++;
            }
        }
        int i=0;
        int j=0;
        while(i<nums.length){
            if(nums[i]!=0){
                nums[j] = nums[i];
                j++;
            }
            i++;
        }
        for(int k=nums.length-count;k<nums.length;k++){
            nums[k]=0;
        }
    }
}