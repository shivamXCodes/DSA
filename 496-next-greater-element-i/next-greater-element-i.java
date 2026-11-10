class Solution {
    public int[] greaterElement(int []nums2){
        Stack<Integer> arr = new Stack<>();
        int [] res = new int[nums2.length];
        for(int i=0;i<nums2.length;i++){
            res[i] = -1;
        }
        for(int i=nums2.length-1;i>=0;i--){
            int curr = nums2[i];
            while(!arr.isEmpty() && curr>=arr.peek()){
                arr.pop();
            }if(!arr.isEmpty()){
                res[i] = arr.peek();
            }
            arr.push(curr);
        }
        return res;
    }
    public int[] nextGreaterElement(int[] nums1, int[] nums2) {
        int [] res = greaterElement(nums2);
        HashMap<Integer,Integer> hm = new HashMap<>();
        for(int i=0;i<res.length;i++){
            hm.put(nums2[i],res[i]);
        }
        int []res2 = new int[nums1.length];
        for(int i=0;i<nums1.length;i++){
            res2[i] = hm.get(nums1[i]);
        }
        return res2;
    }
}