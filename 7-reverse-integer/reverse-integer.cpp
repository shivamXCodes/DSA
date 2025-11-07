class Solution {
public:
    int reverse(int x) {
        long a= 0;
        long sign = 1;
        if(x<0){
            sign=-1;
            x = x*sign;
        }
        while(x>0){
            a = a*10+(x%10);
            x = x/10;
        }
        a = a*sign;
        if(a>INT_MAX || a<INT_MIN){
            return 0;
        }
        return a;
    }
};