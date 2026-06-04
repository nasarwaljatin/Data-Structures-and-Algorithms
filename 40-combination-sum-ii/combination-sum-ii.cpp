class Solution {
public:
    void fn(vector<vector<int>>& ans,vector<int>& nums,int sum,int idx,vector<int>& d,int t){
        if(sum==t){
            ans.push_back(d);
            return;
        }if(sum>t) return;
        for(int i=idx;i<nums.size();i++){
            if(nums[i]>t) break;
            if(i>idx && nums[i]==nums[i-1]) continue;
            d.push_back(nums[i]);
            fn(ans,nums,sum+nums[i],i+1,d,t);
            d.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int t) {
        vector<vector<int>> ans;
        vector<int> d;
        sort(nums.begin(),nums.end());
        fn(ans,nums,0,0,d,t);
        return ans;
    }
};