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
    public ListNode sortList(ListNode head) {
        if(head==null || head.next==null){
            return head;
        }
        ArrayList<Integer> arr= new ArrayList<>();
        ListNode trav = head;
        while(trav!=null){
            arr.add(trav.val);
            trav = trav.next;
        }
        Collections.sort(arr);
        trav = head;
        int i=0;
        while(trav!=null){
            trav.val = arr.get(i);
            i++;
            trav = trav.next;
        }
        return head;
    }
}