class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for(int i = 1;i<s.length();i++){
            int prev = s[i-1];
            int curr = s[i];
            int score = abs(curr-prev);

            sum+=score;
        }
        return sum;
    }
};