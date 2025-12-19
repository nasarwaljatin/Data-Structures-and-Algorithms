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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *prev=NULL,*temp=head;
        head=head->next;
        while(temp && temp->next){
            ListNode *nexi=temp->next->next,*two=temp->next;
            two->next=temp;
            temp->next=nexi;
            if (prev) prev->next = two;
            prev=temp;
            temp=nexi;
        }return head;
    }
};