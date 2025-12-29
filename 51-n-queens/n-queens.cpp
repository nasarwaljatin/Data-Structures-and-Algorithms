class Solution {
public:
    void solve(int col,vector<string>& board,vector<vector<string>>& ans,int n){
        if(col==n){ans.push_back(board);return;}
        for(int row=0;row<n;row++){
            if(safe(row,col,n,board)){
                board[row][col]='Q';
                solve(col+1,board,ans,n);
                board[row][col]='.';
            }
        }
    }
    bool safe(int row,int col,int n,vector<string>& board){
        int duprow=row,dupcol=col;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q') return false;
            row--;col--;
        }col=dupcol;row=duprow;
        while(col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }row=duprow;col=dupcol;
        while(row<n && col>=0){
            if(board[row][col]=='Q') return false;
            row++;col--;
        }return true;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n);
        string s(n,'.');
        vector<vector<string>> ans;
        for(int i=0;i<n;i++){board[i]=s;}
        solve(0,board,ans,n);
        return ans;
    }
};