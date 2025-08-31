class Solution {
public:
   string ans="";
    string defangIPaddr(string address) {
        for (int i = 0; i< address.length();i++){
               if(address[i]== '.'){
                ans+= "[.]";
               }
               else ans+=address[i];

        }
        return ans;
    }
};