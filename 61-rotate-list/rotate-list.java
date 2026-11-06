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
    public ListNode rotateRight(ListNode head, int k) {
        int size = 0;
        ListNode trav = head;
        ListNode start = head;
        ListNode prev = null;
        ListNode curr = head;
        int i = 0;
        if(head== null || head.next==null){
            return head;
        }
        while(trav!=null){
            size++;
            trav = trav.next;
        }
        if(k%size==0){
            return head;
        }
        int res = k%size;
        int index = size-res;

        while(index>0){
            prev = curr;
            curr = curr.next;
            index--;
        }
        prev.next = null;
        trav = curr;
        while(trav.next!=null){
            trav= trav.next;
        }
        trav.next = start;
        return curr;
    }
}