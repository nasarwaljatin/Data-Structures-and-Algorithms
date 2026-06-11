class Solution {
public:
    int change(int d, vector<int>& nums) {
        int n = nums.size();
        vector<unsigned long long> dp(d + 1, 0);
        dp[0] = 1;
        for (int i = 1; i <= n; i++) {
            for (int j = nums[i - 1]; j <= d; j++) {
                dp[j] += dp[j - nums[i - 1]];
            }
        }return dp[d];
    }
};