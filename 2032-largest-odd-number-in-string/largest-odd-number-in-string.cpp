class Solution {
public:
    string largestOddNumber(string arr) {
        int n = arr.size()-1;
        while(n>-1){
            int num = arr[n] - '0';
            if(num%2!=0){
                return arr.substr(0,n+1);
            }
            n--;
        }
        return "";
    }
};