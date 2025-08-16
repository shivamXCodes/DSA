class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
    string res = "";
    int n = s.length();
    int i=0;
    while(i<n)
    {
        string word = "";
        while (i < n && s[i] != ' ')
        {
            word = word + s[i];
            i++;
        }
        while (i < n && s[i] == ' ')
        {
            i++;
        }
        if (!word.empty())
        {
            reverse(word.begin(), word.end());
            if (!res.empty()){
                res += " "; 
            }
            res += word;
        }
    }
    s = res;
    return s;
    }
};