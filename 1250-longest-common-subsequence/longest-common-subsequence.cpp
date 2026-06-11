class Solution {
public:
    int longestCommonSubsequence(string a, string b) {
        int an=a.size(),bn=b.size();
        vector<vector<int>> dp(an+1,vector<int>(bn+1,0));
        for(int i=1;i<=an;i++){
            for(int j=1;j<=bn;j++){
                if(a[i-1]==b[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[an][bn];
    }
};