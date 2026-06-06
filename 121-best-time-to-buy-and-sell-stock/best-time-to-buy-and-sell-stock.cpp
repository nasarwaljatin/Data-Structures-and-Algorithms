class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int mini=nums[0],profit=0;
        for(int i=1;i<nums.size();i++){
            mini=min(nums[i],mini);
            profit=max(nums[i]-mini,profit);
        }return profit;
    }
};