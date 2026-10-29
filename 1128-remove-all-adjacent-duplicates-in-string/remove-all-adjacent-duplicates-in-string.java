class Solution {
    public String removeDuplicates(String s) {
        String res = "";
        for(int i=0;i<s.length();i++){
            char curr = s.charAt(i);
            if(res.length()==0){
                res = res + curr;
            }else{
                char lastChar = res.charAt(res.length()-1);
                if(lastChar==curr){
                    res = res.substring(0,res.length()-1);
                }else{
                    res = res + curr;
                }
            }
        }
        return res;
    }
}