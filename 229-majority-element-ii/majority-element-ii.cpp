class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    int n = nums.size();
    int let = n / 3;
    int max = 1;
    vector<int> arr;
    sort(nums.begin(), nums.end());
    if (n == 1) {
        return nums;
    }
    for (int i = 1; i < n; i++) {
        if (nums[i] == nums[i - 1]) {
            max++;
        } else {
            if (max > let) {
                arr.push_back(nums[i - 1]);
            }
            max = 1;  
        }
    }

    if (max > let) {
        arr.push_back(nums[n - 1]);
    }

    return arr;
    }
};