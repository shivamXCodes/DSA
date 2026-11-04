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
    public boolean isPalindrome(ListNode head) {
        if(head==null || head.next==null){
            return true;
        }
        ListNode slow = head;
        ListNode fast = head;
        while(fast!=null && fast.next!=null){
            slow = slow.next;
            fast = fast.next.next;
        }
        if(fast!=null){
            ListNode prev = slow;
            ListNode next = null;
            ListNode curr = slow.next;
            while(curr!=null){
                next = curr.next;
                curr.next = prev;
                prev = curr;
                curr = next;
            }
            slow.next = null;
            while(head!=null){
                if(head.val!=prev.val){
                    return false;
                }
                head = head.next;
                prev = prev.next;
            }
            
        }else{
            ListNode prev = null;
            ListNode next = null;
            ListNode curr = slow;
            while(curr!=null){
                next = curr.next;
                curr.next = prev;
                prev = curr;
                curr = next;
            }
            slow.next = null;
            while(prev!=null){
                if(head.val!=prev.val){
                    return false;
                }
                head = head.next;
                prev = prev.next;
            }
        }
        return true;
    }
}