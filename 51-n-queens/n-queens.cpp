class Solution {
public:
    bool safe(int row,int col,vector<string> &board,int n){
        int drow=row,dcol=col;
        while(col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }row=drow,col=dcol;
        while(row<n && col>=0){
            if(board[row][col]=='Q') return false;
            row++;col--;
        }row=drow,col=dcol;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q') return false;
            row--;col--;
        }return true;
    }
    void fn(vector<string> &board,int n,int col,vector<vector<string>> &ans){
        if(col==n){ans.push_back(board);return;}
        for(int row=0;row<n;row++){
            if(safe(row,col,board,n)){
                board[row][col]='Q';
                fn(board,n,col+1,ans);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;
        fn(board,n,0,ans);
        return ans;
    }
};