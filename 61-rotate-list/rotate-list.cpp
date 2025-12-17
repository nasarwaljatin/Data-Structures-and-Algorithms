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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        ListNode *temp=head,*nt=NULL;
        int c=1;
        while(temp->next){
            c++;
            temp=temp->next;
        }temp->next=head;
        temp=head;
        int p=c-(k%c)-1;
        while(p--){
            temp=temp->next;
        }head=temp->next;
        temp->next=NULL;
        return head;
    }
};