class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxG = INT_MIN;
        int left = 0;
        int right = height.size()-1;
        while(left<right){
            int area = min(height[left],height[right]) * (right-left);
            maxG = max(maxG,area);
            if(height[left]<=height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxG;
    }
};