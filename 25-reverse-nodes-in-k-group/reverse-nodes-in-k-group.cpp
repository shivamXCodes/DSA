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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL){
            return NULL;
        }
        ListNode* temp = head;
        for(int i=0;i<k;i++){
            if(temp==NULL){
                return head;
            }
            temp = temp->next;
        }
        int i=0;
        ListNode* fwd = NULL;
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr!=NULL && i<k){
            fwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = fwd;
            i++;
        }
        if(fwd!=NULL){
            head->next = reverseKGroup(fwd,k);
        }
        return prev;
    }
};