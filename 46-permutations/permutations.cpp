class Solution {
public:
    void fn(vector<int>& ds,vector<vector<int>>& ans,vector<int>& nums,vector<int>& used){
        if(nums.size()==ds.size()){
            ans.push_back(ds);
            return;
        }
        for(int k=0;k<nums.size();k++){
            if (used[k] == 1) continue;
            used[k] = 1;
            ds.push_back(nums[k]);
            fn(ds,ans,nums,used);
            ds.pop_back();
            used[k]=0;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        vector<int> used(nums.size(),0);
        fn(ds,ans,nums,used);
        return ans;
    }
};