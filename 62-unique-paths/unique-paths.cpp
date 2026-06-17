class Solution {
public:
    vector<vector<int>> dp = vector<vector<int>>(101, vector<int>(101, -1));
    int uniquePaths(int m, int n) {
        if(!m||!n) return 1;
        if(m==1 || n==1) return min(m,n);
        if(dp[m][n]!=-1) return dp[m][n];
        return dp[m][n]=uniquePaths(m-1,n) + uniquePaths(m,n-1);
    }
};