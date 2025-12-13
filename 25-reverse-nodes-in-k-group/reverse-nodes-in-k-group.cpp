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
 ListNode* reverseLL(ListNode* head) {
    ListNode* prev = NULL;
    ListNode* curr = head;

    while (curr) {
        ListNode* nxt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nxt;
    }
    return prev;
}

 ListNode *getKth(ListNode *temp,int k){
    k-=1;while(k>0 && temp){
        k--;
        temp=temp->next;
    }return temp;
 }
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp=head,*prev=NULL;
        while(temp){
            ListNode *knode=getKth(temp,k);
            if(!knode) {if(prev) prev->next=temp;break;}
            ListNode *nextn=knode->next;
            knode->next=NULL;
            reverseLL(temp);
            if(head==temp) head=knode;
            else prev->next=knode;
            prev=temp;
            temp=nextn;
        }return head;

    }
};