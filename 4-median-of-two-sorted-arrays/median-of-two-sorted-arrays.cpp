class Solution {
public:
    double findMedianSortedArrays(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        int m=A.size(),n=B.size(),i=0,j=0;
        while(i<m && j<n){
            if(A[i]<B[j]) ans.push_back(A[i++]);
            else ans.push_back(B[j++]);
        }
        while(i<m) ans.push_back(A[i++]);
        while(j<n) ans.push_back(B[j++]);
        int k=ans.size();
        if(k%2==0) return ((ans[k/2]+ans[(k/2)-1])/2.0);
        else return ans[k/2];

    }
};