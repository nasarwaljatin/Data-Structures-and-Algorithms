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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 && !list2) return NULL;
        if(!list1 && list2) return list2;
        if(list1 && !list2) return list1;
        ListNode *dummy=new ListNode(-1);
        ListNode *a=list1,*b=list2;
        ListNode *temp=dummy;
        while(a && b){
            if(a->val >= b->val) {temp->next=b;b=b->next;}
            else {temp->next=a;a=a->next;}
            temp=temp->next;
        }if(a) temp->next=a;
        else temp->next=b;
        return dummy->next;
    }
};