class Solution {
    public boolean containsDuplicate(int[] nums) {
        System.out.println(nums[0]);
        Arrays.sort(nums);
        System.out.println(nums[0]);
        for(int i=0;i<nums.length-1;i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }
        return false;
    }
}