class Solution {
public:
    int peakIndexInMountainArray(vector<int>& nums) {
        vector<int> arr = nums ;
        sort(arr.begin(),arr.end());
        int target = arr[arr.size()-1];

       int start = 0, end = nums.size()- 1;
    while (start < end) {
    int mid = (start + end) / 2;
    if (nums[mid] < nums[mid + 1])
        start = mid + 1;
    else
        end = mid;
}
return start;
    }
};