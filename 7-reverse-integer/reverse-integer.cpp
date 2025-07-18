class Solution {
public:
    int reverse(int x) {
        long a = x;
        long rev=0;
        long sign=1;
        if(a> INT_MAX || a<INT_MIN){
            return 0;
        }
        if(a<0){
            sign = -1;
        }
        a = abs(a);
        while(a>0){
            rev = (rev*10)+((a)%10);
            a = a/10;
        }
        if(rev> INT_MAX || rev <INT_MIN){
            return 0;
        }
        return rev*sign;
    }
};