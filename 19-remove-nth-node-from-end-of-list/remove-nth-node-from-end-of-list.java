/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode trav = head;
        int size=0;
        while(trav!=null){
            size++;
            trav = trav.next;
        }
        if(head == null || head.next==null){
            head = null;
            return head;
        }
        if(n==size){
            head = head.next;
            return head;
        }
        trav = head;
        int i=size-n-1; 
        for(int j=1;j<=i;j++){
            trav = trav.next;
        }
        trav.next = trav.next.next;
        return head;
    }
}