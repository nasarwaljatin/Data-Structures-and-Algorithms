/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int data;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int e=0,o=0;
        ListNode *slow=head,*fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }if(fast==NULL) e=1;
        else o=1;
        
        ListNode *temp=NULL;
        if(e) temp=slow;
        else temp=slow->next;
        ListNode *prev=NULL,*nex=temp;
        while(nex){
            nex=nex->next;
            temp->next=prev;
            prev=temp;
            temp=nex;
        }temp=prev;
        slow=head;
        while(temp){
            if(slow->val!=temp->val) return false;
            slow=slow->next;
            temp=temp->next;
        }return true;

    }
};