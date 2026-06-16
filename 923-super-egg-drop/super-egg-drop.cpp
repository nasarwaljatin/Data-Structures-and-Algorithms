class Solution {
public:
    vector<vector<int>> dp;
    int fn(int n,int f){
        if(n==1||f<=1) return f;
        if(dp[n][f]!=-1) return dp[n][f];
        int mini=INT_MAX;
        int low=1,high=f;
        while(low<=high){
            int a,b,i=(low+high)>>1;
            a=dp[n-1][i-1]=fn(n-1,i-1);;
            b=dp[n][f-i]=fn(n,f-i);
            mini=min(mini,1+max(a,b));
            if(a<b) low=i+1;
            else high=i-1;
        }return dp[n][f]=mini;
    }
    int superEggDrop(int n, int f) {
        dp.resize(n+1,vector<int>(f+1,-1));
        return fn(n,f);
    }
};