class Solution {
public:
    void fn(int k, set<vector<int>>& ans, vector<int>& ds, vector<int>& c) {
            ans.insert(ds);
        for (int i = k; i < c.size(); i++) {
            ds.push_back(c[i]);
            fn(i + 1, ans, ds, c);
            ds.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ansi;
        set<vector<int>> ans;
        vector<int> ds;
        fn(0, ans, ds, nums);
        for (auto it : ans) {
            ansi.push_back(it);
        }
        return ansi;
    }
};