class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size(),sum=accumulate(nums.begin(),nums.end(),0),t=sum/2;
        if(sum%2) return false;
        vector<vector<int>> dp(n+1,vector<int>(t+1,0));
        for(int i=0;i<=n;i++) dp[i][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=t;j++){
                if(nums[i-1]<=j) dp[i][j]=dp[i-1][j]||dp[i-1][j-nums[i-1]];
                else dp[i][j]=dp[i-1][j];
            }
        }return dp[n][t];
    }
};