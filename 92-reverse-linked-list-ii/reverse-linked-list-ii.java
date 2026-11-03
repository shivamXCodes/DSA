class Solution {
    public ListNode reverseBetween(ListNode head, int left, int right) {
        if(head==null || head.next==null || left==right){
            return head;
        }
        ListNode prev1 = null;
        ListNode curr = head;
        for(int i=1;i<left;i++){
            prev1 = curr;
            curr = curr.next;
        }

        ListNode tail = curr;
        ListNode prev = null;

        for(int i=0;i<right-left+1;i++){
            ListNode next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        if(prev1!=null ){
            prev1.next=prev;
        }else{
            head = prev;
        }
        tail.next = curr;
        return head;
    }
}