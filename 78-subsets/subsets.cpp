class Solution {
public:
    void fn(vector<int>& nums,vector<vector<int>>& ans,vector<int>& d,int i){
        if(i==nums.size()) {ans.push_back(d);return;}
        d.push_back(nums[i]);
        fn(nums,ans,d,i+1);
        d.pop_back();
        fn(nums,ans,d,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> d;
        fn(nums,ans,d,0);
        return ans;
    }
};