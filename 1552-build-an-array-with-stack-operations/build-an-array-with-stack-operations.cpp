class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> result;
        int num = 1;
        for(int i=0;i<target.size();i++){
            while(num<target[i]){
                result.push_back("Push");
                result.push_back("Pop");
                num++;
            }
            result.push_back("Push");
            num++;
        }
        return result;
    }
};