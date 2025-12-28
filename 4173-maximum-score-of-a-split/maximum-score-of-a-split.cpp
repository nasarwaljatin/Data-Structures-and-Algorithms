class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n=nums.size();
        long long sum=0,mini=LLONG_MAX,maxi=LLONG_MIN;
        vector<long long> ps(n);
        vector<long long> sm(n);
        for(int i=0;i<n;i++){
            sum+=nums[i];
            ps[i]=(sum);
        }for (int i = n - 1; i >= 0; i--) {
            mini = min(mini, (long long)nums[i]);
            sm[i] = mini;
        }for (int i = 0; i < n-1; i++) {
            maxi = max(maxi, ps[i] - sm[i+1]);
        }
        return maxi;
    }
};