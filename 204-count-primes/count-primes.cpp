class Solution {
public:
    int countPrimes(int n) {
    int cnt = 0;
    vector<bool>isprime(n+1,true);
    isprime[0]=isprime[1]=false;
    for(int i=2;i<n;i++){
        if(isprime[i]){
            cnt++;
            for(int j=i*2;j<n;j=j+i){
                isprime[j]=0;
            }
        }

    }
    return cnt;
    }
};