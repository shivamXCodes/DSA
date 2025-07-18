class Solution {
public:
    bool isPalindrome(int n) {
        long a = 0;
        int x = n;
        if(n<0){
            return 0;
        }
        while(x>0){
            a = a*10+x%10;
            x = x/10;
        }
        return a==n;
    }
};