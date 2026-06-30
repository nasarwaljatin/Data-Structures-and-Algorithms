class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size(),mini=INT_MAX,mini2=INT_MAX;
        stack<int> st;
        for(int i=0;i<n;i++){
            if(nums[i]<mini) mini=nums[i];
            if(nums[i]>mini && nums[i]<mini2) mini2=nums[i];
            if(nums[i]>mini && nums[i]>mini2) return true;
        }return false;
    }
};