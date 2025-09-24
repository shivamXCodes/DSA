/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp  = head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        if(n==count){
            return head->next;
        }
        ListNode* l1 = head;
        for(int i=1;i<count-n;i++){
            l1 = l1->next;
        }
        l1->next = l1->next->next;
        return head;
    }
};