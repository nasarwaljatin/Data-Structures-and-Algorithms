class Solution {
public:
    void sets(vector<int>& nums, int i,vector<int>& curr, vector<vector<int>>& ans){
        if(i==nums.size()){
            ans.push_back(curr);
            return;
        }curr.push_back(nums[i]);
        sets(nums,i+1,curr,ans);
        curr.pop_back();
        sets(nums,i+1,curr,ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> curr;
        sets(nums,0, curr, ans);
        return ans;
    }
};