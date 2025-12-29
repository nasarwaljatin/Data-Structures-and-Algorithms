class Solution {
public:
    void fn(int k, vector<vector<int>>& ans, vector<int>& ds, vector<int>& c) {
        ans.push_back(ds);
        for (int i = k; i < c.size(); i++) {
            if (i > k && c[i] == c[i - 1]) continue;
            ds.push_back(c[i]);
            fn(i + 1, ans, ds, c);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> ds;
        fn(0, ans, ds, nums);
        return ans;
    }
};