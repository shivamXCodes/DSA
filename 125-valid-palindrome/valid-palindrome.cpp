class Solution {
    private:
    bool Valid(string str){
        int start = 0;
        int end = str.length()-1;
        while(start<end){
            if(str[start]!=str[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    void makeproper(string &str){
        int start = 0;
        for(int i=0;i<str.size();i++){
            if((str[i]>='a' && str[i]<='z') || (str[i]<='Z' && str[i]>='A') || (str[i]>='0'  && str[i] <= '9')){
                str[start]=str[i];
                start++;
            }
        }
        str.resize(start);
        for(int i=0;i<str.size();i++){
            if(str[i]>='A' && str[i]<='Z'){
                str[i] = str[i]+32;
            }
        }
        Valid(str);
    }
public:
    bool isPalindrome(string s) {
        makeproper(s);
        return Valid(s);
    }
};