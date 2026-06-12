class Solution {
public:
    string shortestCommonSupersequence(string a, string b) {
        int an=a.size(),bn=b.size();
        vector<vector<int>> dp(an+1,vector<int>(bn+1,max(an,bn)));
        for(int i=1;i<=an;i++){
            for(int j=1;j<=bn;j++){
                if(a[i-1]==b[j-1]) dp[i][j]=1+dp[i-1][j-1];
                else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }int i=an,j=bn;
        string p;
        while(i&&j){
            if(a[i-1]==b[j-1]){
                p.push_back(a[i-1]);
                i--;j--;
            }else{
                if(dp[i-1][j]<dp[i][j-1]){p.push_back(b[j-1]);j--;}
                else {p.push_back(a[i-1]);i--;}
            }
        }while(i){p.push_back(a[i-1]);i--;}
        while(j){p.push_back(b[j-1]);j--;}
        reverse(p.begin(),p.end());
        return p;
    }
};