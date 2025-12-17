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
        int c=0;
        if (!head || !head->next || k == 0) return head;
        ListNode *one=head,*two=NULL,*temp=head,*prevone=one;
        while(temp){
            c++;
            temp=temp->next;
        }k = k % c;
        if (k == 0) return head;
        while(k-- && one){
            prevone=one;
            one=one->next;
        }while(prevone && prevone->next){
            if(two) two=two->next;
            else two=head;
            prevone=prevone->next;
        }temp=two->next;
        two->next=NULL;
        prevone->next=head;
        return temp;
    }
};