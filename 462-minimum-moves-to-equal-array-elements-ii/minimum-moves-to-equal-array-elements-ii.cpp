class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int min = 0;
        sort(nums.begin(),nums.end());
        int median = nums[nums.size()/2];
        int totalMoves = 0;
        for(int i=0;i<nums.size();i++){
            totalMoves = totalMoves+abs(nums[i]-median);
        }
        return totalMoves;
    }
};