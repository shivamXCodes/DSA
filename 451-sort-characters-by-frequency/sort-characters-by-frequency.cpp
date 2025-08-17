class Solution {
public:
    string frequencySort(string s) {
        int alp[256] = {0};
        vector<pair<char,int>>freq;
        int i=0;
        while(i<s.length()){
            char ch = s[i];
            alp[ch]+=1;
            i++;
        }
        for(int j=0;j<256;j++){
            if(alp[j]>0){
                freq.push_back({(char)j,alp[j]});
            }
        }
        sort(freq.begin(),freq.end(),[](pair<char,int> &a,pair<char,int> &b){
            return a.second>b.second;
        });
        string str = "";
        for(auto &p: freq){
            str.append(p.second,p.first);
        }
        return str;
    }
};