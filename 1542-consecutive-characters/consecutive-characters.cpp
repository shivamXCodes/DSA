class Solution {
public:
    int maxPower(string s) {
        int size = s.size();
        string str;
        str+=s[0];
        int max = 1;
        for(int i=1;i<size;i++){
            if(s[i]==s[i-1]){
                str = str+s[i];
            }else{
                str = s[i];
            }
            if(str.size()>max){
                max = str.size();
            }
            
        }
        return max;
    }
};