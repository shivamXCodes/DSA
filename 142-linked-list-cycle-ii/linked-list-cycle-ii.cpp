/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*>visited;
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr!=NULL){
            if(visited.count(curr)==1){
                    return prev->next;
            }
            visited.insert(curr);
            
            prev = curr;
            curr = curr->next;
        }
        return NULL;
    }
};