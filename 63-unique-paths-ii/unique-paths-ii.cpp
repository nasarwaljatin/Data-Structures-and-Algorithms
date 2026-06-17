class Solution {
public:
    vector<vector<int>> dp;
    bool notValid(vector<vector<int>>& grid,int m,int n,int i,int j){
        if(i<m && j<n && grid[i][j]!=1) return false;
        else return true;
    }
    int fn(vector<vector<int>>& grid,int m,int n,int i,int j){
        if((i==m-1 && j==n-1) && !notValid(grid,m,n,i,j)) return 1;
        if(dp[i][j]!=-1) return dp[i][j];
        if(notValid(grid,m,n,i,j)) return 0;
        return dp[i][j]=fn(grid,m,n,i+1,j)+fn(grid,m,n,i,j+1);
    }
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        dp.resize(m+1,vector<int>(n+1,-1));
        return fn(grid,m,n,0,0);
    }
};