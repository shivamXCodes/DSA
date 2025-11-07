class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        if(x>INT_MAX || x<INT_MIN){
            return false;
        }
        long temp = x;
        long a = 0;
        while(temp>0){
            a = a*10+temp%10;
            temp = temp/10;
        }
        if(a==x){
            return true;
        }
        return false;
    }
};