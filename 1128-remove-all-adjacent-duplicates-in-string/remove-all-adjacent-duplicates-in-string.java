class Solution {
    public String removeDuplicates(String s) {
        Stack<Character>arr = new Stack<>();
        for( int i=0;i<s.length();i++){
            char ch = s.charAt(i);
            if(arr.empty()){
                arr.push(ch);
            }else{
                if(ch==arr.peek()){
                    arr.pop();
                }else{
                    arr.push(ch);
                }
            }
        }
        StringBuilder str = new StringBuilder();
        while(!arr.empty()){
            str.append(arr.pop());
        }
        return str.reverse().toString();
    }
}