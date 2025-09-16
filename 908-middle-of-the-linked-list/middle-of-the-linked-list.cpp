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
    ListNode* middleNode(ListNode* head) {
        int length = 0;
        ListNode* l1 = head;

        while(l1!=NULL){
            length++;
            l1 = l1->next;
        }
        int i=0;
        while(i<length/2){
            head = head->next;
            i++;
        }
        return head;
    }
};