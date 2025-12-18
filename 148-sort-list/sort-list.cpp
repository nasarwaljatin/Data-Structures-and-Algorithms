 ListNode* findmid(ListNode* head){
    ListNode *slow=head,*fast=head->next;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }return slow;
 }
 ListNode* merger2sortedLL(ListNode* list1, ListNode *list2){
    ListNode *dummy=new ListNode(-1),*temp=dummy,*a=list1,*b=list2;
    while(a&&b){
        if(a->val >= b->val){
            temp->next=b;
            b=b->next;
        }else{
            temp->next=a;
            a=a->next;
        }temp=temp->next;
    }if(a) temp->next=a;
    else temp->next=b;
    return dummy->next;
 }
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *mid=findmid(head),*lefth=head,*rhead=mid->next;
        mid->next=NULL;
        lefth=sortList(lefth);
        rhead=sortList(rhead);
        return merger2sortedLL(lefth,rhead);
    }
};