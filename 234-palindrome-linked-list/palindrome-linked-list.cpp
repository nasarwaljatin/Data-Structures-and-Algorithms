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
    bool isPalindrome(ListNode* head) {
        vector<int> A;
        ListNode *temp=head;
        while(temp){
            A.push_back(temp->val);
            temp=temp->next;
        }int n=A.size();
        if(n==1) return true;
        for(int i=0;i<n;i++){
            if(A[i]==A[n-i-1]) continue;
            else return false;
        }return true;
    }
};