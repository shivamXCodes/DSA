class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0;
        int j=0;
        vector<int>arr;
        int m = nums1.size();
        int n = nums2.size();
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                arr.push_back(nums1[i]);
                i++;
            }else{
                arr.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m){
            arr.push_back(nums1[i]);
            i++;
        }while(j<n){
            arr.push_back(nums2[j]);
            j++;
        }
        int size = arr.size();
        if(size%2==0){
            return (arr[(size-1)/2]+arr[size/2])/2.0;
        }
        return arr[size/2];
    }
};