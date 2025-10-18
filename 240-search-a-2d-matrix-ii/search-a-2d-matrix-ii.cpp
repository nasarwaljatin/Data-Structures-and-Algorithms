class Solution {
public:
    bool searchMatrix(vector<vector<int>>& A, int t) {
        int r=A.size(),c=A[0].size();
        for(int i=0;i<r;i++){
            int low=0,high=c-1;
            while(low<=high){
                int mid=(low+high)>>1;
                if(A[i][mid]==t) return true;
                else if(A[i][mid]>t) high=mid-1;
                else low=mid+1;
            }
        }return false;
    }
};