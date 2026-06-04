class Solution {
public:
    void fn(vector<int>& nums,set<vector<int>>& ans,vector<int>& d,int i){
        if(i==nums.size()){ans.insert(d);return;}
        d.push_back(nums[i]);
        fn(nums,ans,d,i+1);
        d.pop_back();
        fn(nums,ans,d,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        vector<vector<int>> ansi;
        vector<int> d;
        sort(nums.begin(),nums.end());
        fn(nums,ans,d,0);
        for(auto it:ans){
            ansi.push_back(it);
        }
        return ansi;
    }
};