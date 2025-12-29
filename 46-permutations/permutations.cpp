class Solution {
public:
    void fn(vector<vector<int>>& ans,vector<int>& nums,int k){
        if(k==nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=k;i<nums.size();i++){
            swap(nums[i],nums[k]);
            fn(ans,nums,k+1);
            swap(nums[i],nums[k]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        // vector<int> ds;
        vector<vector<int>> ans;
        // vector<int> used(nums.size(),0);
        fn(ans,nums,0);
        return ans;
    }
};