class Solution {
public:
    string reverseWords(string s) {
        std::vector<std::string>arr;
        string str = "";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
                str.push_back(s[i]);
            }else{
                if(str.length()){
                    cout<<str<<endl;
                    arr.push_back(str);
                }
                str = "";
            }
        }
         if(str.length()){
            cout<<str<<endl;
            arr.push_back(str);
        }
        reverse(arr.begin(),arr.end());
        string temp;
        for(int i=0;i<arr.size();i++){
            if(i==arr.size()-1){
                temp += arr[i];
            }else{
                temp += arr[i]+' ';
            }
        }
        return temp;
    }
};