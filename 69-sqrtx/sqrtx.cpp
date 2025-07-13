class Solution {
public:
    int mySqrt(int x) {
        long n = 0;
        if(x==0){
            return 0;
        }if(x==1){
            return 1;
        }
        for(long i=2;i<=x;i++){
            if(i*i==x){
                return i;
            }
            if(i*i>x){
                n=i;
                break;
            }
        }
        return n-1;
    }
};