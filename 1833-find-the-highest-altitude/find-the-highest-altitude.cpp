class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>arr;
        int sum=0;
        arr.push_back(0);
        for(int i=0;i<gain.size();i++){
            sum = sum+gain[i];
            arr.push_back(sum);
        }
        sort(arr.begin(),arr.end());
        return arr[arr.size()-1];
        
    }
};