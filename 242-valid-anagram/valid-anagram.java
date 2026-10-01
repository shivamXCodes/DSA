class Solution {
    public boolean isAnagram(String s, String t) {
        HashMap<Character,Integer> hp1 = new HashMap<>();
        HashMap<Character,Integer> hp2 = new HashMap<>();

        if(s.length()!=t.length()){
            return false;
        }else{

        for(int i=0;i<s.length();i++){
            hp1.put( s.charAt(i) , hp1.getOrDefault(s.charAt(i),0) + 1);
        }
        for(int i=0;i<t.length();i++){
            hp2.put(t.charAt(i),hp2.getOrDefault(t.charAt(i),0)+1);
        }

        if(hp1.equals(hp2)){
            return true;
        }
        return false;
        }
    }
}