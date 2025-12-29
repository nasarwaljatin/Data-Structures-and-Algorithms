class Solution {
public:
    int solve(int col,vector<string>& board,int n,int c){
        int l=0;
        if(col==n){return 1;}
        for(int row=0;row<n;row++){
            if(safe(row,col,n,board)){
                board[row][col]='Q';
                l+=solve(col+1,board,n,c);
                board[row][col]='.';
            }
        }return l;
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
    int totalNQueens(int n) {
        int c=0;
        vector<string> board(n);
        string s(n,'.');
        // vector<vector<string>> ans;
        for(int i=0;i<n;i++){board[i]=s;}
        return solve(0,board,n,c);
    }
};