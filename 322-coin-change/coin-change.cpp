class Solution {
public:
    int coinChange(vector<int>& nums, int d) {
        int n=nums.size();
        vector<vector<int>> dp(n+1,vector<int>(d+1,d+1));
        for(int i=0;i<=n;i++) dp[i][0]=0;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=d;j++){
                if(nums[i-1]<=j) dp[i][j]=min(dp[i-1][j],1+dp[i][j-nums[i-1]]);
                else dp[i][j]=dp[i-1][j];
            }
        }if(dp[n][d]>d) return -1;
        else return dp[n][d];
    }
};