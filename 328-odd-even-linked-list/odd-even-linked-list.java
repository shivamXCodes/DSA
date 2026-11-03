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
    public ListNode oddEvenList(ListNode head) {
        if(head==null){
            return head;
        }
        if(head.next==null){
            return head;
        }
        if(head.next.next==null){
            return head;
        }
        ListNode trav = head.next;
        ListNode odd = head;
        ListNode even = head.next;

        while(odd.next!=null && even.next!=null){
            ListNode oddnext = odd.next.next;
            odd.next = oddnext;
            even.next = oddnext.next;
            odd = odd.next;
            even = even.next;
        }
        odd.next = trav;

        return head;
    }
}