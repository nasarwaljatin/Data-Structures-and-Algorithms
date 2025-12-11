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
        int c=0;
        ListNode* temp=head;
        while(temp){
            c++;
            temp=temp->next;
        }if(n == c) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        temp=head;
        int k=c-n-1;
        while(k--){
            temp=temp->next;
        }
        if(n==1){
            temp->next=NULL;
            return head;
        }ListNode *temp2=temp->next;
        temp->next=temp2->next;
        delete(temp2);
        return head;
    }
};