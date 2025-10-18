class Solution {
public:
    bool searchMatrix(vector<vector<int>>& A, int t) {
        int r=A.size(),c=A[0].size();
        int low=0,high=r-1;
        while(low<=high){
            int mid=(low+high)>>1;
            if(A[mid][0]>t) high=mid-1;
            else if(A[mid][0]<t) low=mid+1;
            else return true;
        }int row = low - 1;
        if (row < 0) return false;
        int l=0,h=c-1;
        while(l<=h){
            int m=(l+h)>>1;
            if(A[row][m]>t) h=m-1;
            else if(A[row][m]<t) l=m+1;
            else return true;
        }return false;
    }
};