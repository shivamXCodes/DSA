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
    ListNode* getMiddle(ListNode* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next!=NULL && fast->next->next!=NULL ){
          slow = slow->next;
          fast = fast->next->next;
        }
        return slow;
         
    }
    ListNode* reverse(ListNode* head){
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr!=NULL){
            ListNode* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
       ListNode* middle=getMiddle(head);
       ListNode* firstLL = head;
       ListNode* secondLL = reverse(middle->next);
       while(secondLL!=NULL){
        if(firstLL->val!=secondLL->val){
            return false;
        }
        firstLL=firstLL->next;
        secondLL = secondLL->next;
       }
       return true;
    }
};