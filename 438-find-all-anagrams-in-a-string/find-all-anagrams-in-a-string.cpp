class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if (s.size() < p.size()) return ans;

        int window[26] = {0};
        int need[26] = {0};

        int k = p.length();

        for (int i = 0; i < p.length(); i++) {
            need[p[i] - 'a']++;
        }

        for (int i = 0; i < k; i++) {
            window[s[i] - 'a']++;
        }

        bool same = true;
        for (int i = 0; i < 26; i++) {
            if (window[i] != need[i]) {
                same = false;
                break;
            }
        }
        if (same) {
            ans.push_back(0);
        }
        for(int i = k;i<s.size();i++){
            window[s[i] - 'a']++;
            window[s[i-k]-'a']--;

            same = true;
            for (int i = 0; i < 26; i++) {
            if (window[i] != need[i]) {
                same = false;
                break;
            }
        }
        if (same) {
            ans.push_back(i-k+1);
        }

        }
        return ans;
    }
};