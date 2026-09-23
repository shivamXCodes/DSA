class Solution {
    public int[] getConcatenation(int[] nums) {
        int []ans = new int[2*(nums.length)];
        for(int i=0;i<nums.length;i++){
            ans[i] = nums[i];
        }
        int j = nums.length;
        for(int i=0;i<nums.length;i++){
            ans[j] = nums[i];
            j++;
        }
        return ans;
    }
}