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
ListNode* findMid(ListNode* head){
    if(head==NULL || head->next==NULL){
            return head;
    }
    ListNode* fast = head;
    ListNode* slow = head;
    while(fast->next!=NULL && fast->next->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
ListNode* merge(ListNode* left,ListNode* right){
    if(left==NULL){
        return right;
    }if(right==NULL){
        return left;
    }
    ListNode* dummy = new ListNode(-1);
    ListNode* temp = dummy;
    while(left!=NULL && right!=NULL){
        if(left->val >=right->val){
            temp->next = right;
            right  =right->next;
        }else{
            temp->next = left;
            left = left->next;
        }
        temp = temp->next;
    }
    if(left!=NULL)temp->next = left;
    if(right!=NULL)temp->next = right;
    return dummy->next;
}
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* mid = findMid(head);
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = NULL;

        left = sortList(left);
        right = sortList(right);
        ListNode* result = merge(left,right);
        return result;
    }
};