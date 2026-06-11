class Solution {
public:
    int change(int d, vector<int>& nums) {
        int n=nums.size(),c=0;
        vector<vector<unsigned long long>> dp(n+1,vector<unsigned long long>(d+1,0));
        for(int i=0;i<=n;i++) dp[i][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=d;j++){
                if(nums[i-1]<=j) dp[i][j]=dp[i-1][j]+dp[i][j-nums[i-1]];
                else dp[i][j]=dp[i-1][j];
            }
        }
        return dp[n][d];
    }
};