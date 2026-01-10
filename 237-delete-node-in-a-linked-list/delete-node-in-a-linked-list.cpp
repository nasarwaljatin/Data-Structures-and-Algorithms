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
    void deleteNode(ListNode* node) {
        ListNode* temp=node->next,*prev=node,*k=NULL;
        while(temp){
            swap(prev->val,temp->val);
            temp=temp->next;
            k=prev;
            prev=prev->next;
        }k->next=NULL;
    }
};