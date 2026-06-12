class Solution {
public:
    int minDistance(string a, string b) {
        int an=a.size(),bn=b.size();
        vector<vector<int>> dp(an+1,vector<int>(bn+1));
        for (int i = 0; i <= an; i++) dp[i][0] = i;
        for (int j = 0; j <= bn; j++) dp[0][j] = j;
        for(int i=1;i<=an;i++){
            for(int j=1;j<=bn;j++){
                if(a[i-1]==b[j-1]) dp[i][j]=dp[i-1][j-1];
                else dp[i][j]=1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
            }
        }return dp[an][bn];
    }
};