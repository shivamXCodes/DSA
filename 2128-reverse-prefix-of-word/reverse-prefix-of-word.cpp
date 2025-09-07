class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = 0;
        int end = word.length()-1;
        while(index<=end){
            if(word[index]==ch){
                break;
            }
            index++;
            if(index>end){
                return word;
            }
        }
        int start = 0;
        while(start<=index){
            swap(word[start],word[index]);
            start++;
            index--;
        }
        return word;
    }
};