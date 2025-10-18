class Solution {
public:
    bool searchMatrix(vector<vector<int>>& A, int t) {
        int r=A.size(),c=A[0].size();
        int row=0,col=c-1;
        while(row<r && col>=0){
            if(A[row][col]==t) return true;
            else if(A[row][col]>t) col--;
            else row++;
        }return false;
    }
};