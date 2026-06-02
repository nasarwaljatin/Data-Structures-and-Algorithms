class Solution {
public:
    void fn(vector<int>& nums,vector<vector<int>>& ans,vector<int>& d,int s,int i,int t){
        if(s==t){ans.push_back(d);return;}
        if (s > t || i >= nums.size()) return;
        d.push_back(nums[i]);
        fn(nums,ans,d,s+nums[i],i,t);
        d.pop_back();
        fn(nums,ans,d,s,i+1,t);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int t) {
        vector<vector<int>> ans;
        vector<int> d;
        fn(nums,ans,d,0,0,t);
        return ans;
    }
};