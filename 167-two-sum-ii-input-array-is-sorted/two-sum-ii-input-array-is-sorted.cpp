class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int len1 = 1;
        int len2 = numbers.size();
        vector<int> arr;

        while((len1-1) < (len2-1) ){
            int sum = numbers[len1-1] + numbers[len2-1];
            if( sum == target) {
                arr.push_back(len1);
                arr.push_back(len2);
                return arr;
            }
            else if(sum<target){
                len1++;
            }
            else{
                len2--;
            }
            
        }
        return arr;
    }
};