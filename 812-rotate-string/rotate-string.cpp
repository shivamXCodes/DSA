class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        if(s==goal){
            return true;
        }
        for(int i=1;i<n;i++){
            char c = s[0];
            s.erase(s.begin());
            s.push_back(c);
            if(s==goal){
                return true;
            }
        }
        return false;
    }
};