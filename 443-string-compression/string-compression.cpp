class Solution {
public:
    int compress(vector<char>& arr) {
        int count=1;
        int oc=0;
        vector<char>res;
        int n = arr.size();
        for(int i=0;i<n;i++){
            count=1;
            int j=i+1;
            while(j<n && arr[j]==arr[i]){
                count++;
                j++;
            }
            arr[oc]=arr[i];
            oc++;

            if(count>1){
                string cnt = to_string(count);
                for(char c: cnt){
                    arr[oc]=c;
                    oc++;
                }
            }
            i=j-1;
        }
        return oc;
    }
};