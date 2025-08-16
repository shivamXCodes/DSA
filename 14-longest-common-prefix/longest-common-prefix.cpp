class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string str = "";
        int minLen = INT_MAX;
        for(int i=0;i<strs.size();i++){
            if(strs[i].length()<minLen){
                minLen = strs[i].length();
            }
        }

        string prefix="";
        for(int i=0;i<minLen;i++){
            char c = strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(strs[j][i]!=c){
                    return prefix;
                }
            }
            prefix = prefix+c;
        }
        return prefix;
    }
};