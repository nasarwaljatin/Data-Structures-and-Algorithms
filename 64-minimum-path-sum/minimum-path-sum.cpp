class Solution {
public:
    vector<vector<int>> dp;
    int fn(vector<vector<int>>& grid,int i,int j){
        if(i==grid.size()-1 && j==grid[0].size()-1) return grid[i][j];
        if(i>=grid.size() || j>=grid[0].size()) return INT_MAX;
        if(dp[i][j]!=INT_MAX) return dp[i][j];
        return dp[i][j]=grid[i][j]+min(fn(grid,i+1,j),fn(grid,i,j+1));
    }
    int minPathSum(vector<vector<int>>& grid) {
        dp.assign(grid.size()+1,vector<int>(grid[0].size()+1,INT_MAX));
        return fn(grid,0,0);
    }
};