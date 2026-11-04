/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) {
 *         val = x;
 *         next = null;
 *     }
 * }
 */
public class Solution {
    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {

        ListNode trav1 = headA;
        ListNode trav2 = headB;
        if(headA==null || headB==null){
            return new ListNode(0);
        }
        int size1 = 0;
        int size2 = 0;

        while(trav1!=null){
            size1++;
            trav1 = trav1.next;
        }while(trav2!=null){
            size2++;
            trav2 = trav2.next;
        }
        trav1 = headA;
        trav2 = headB;
        int res = size1-size2;
        if(res<0){
            res = res*(-1);
            for(int i=0;i<res;i++){
                trav2 = trav2.next;
            }
        }else{
            for(int i=0;i<res;i++){
                trav1 = trav1.next;
            }
        }
        while(trav1!=null && trav2!=null){
            if(trav1==trav2){
                return trav1;
            }
            trav1 = trav1.next;
            trav2 = trav2.next;
        }
        return null;
    }
}