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
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        vector<int> a;
        ListNode *temp=head;
        while(temp){
            a.push_back(temp->val);
            temp=temp->next;
        }sort(a.begin(),a.end());
        head->val=a[0];
        temp=head;
        for(int i=1;i<a.size();i++){
            temp=temp->next;
            temp->val=a[i];
        }return head;
    }
};