class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int mini=nums[0],p=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<mini) mini=nums[i];
            p=max(p,nums[i]-mini);
        }
        return p;
    }
};