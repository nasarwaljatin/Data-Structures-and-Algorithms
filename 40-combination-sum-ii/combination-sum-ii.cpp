class Solution {
public:
    void fn(int i, int s, vector<int>& ds, vector<vector<int>>& ans,
            vector<int>& c) {
        if (s == 0) {
            ans.push_back(ds);
            return;
        }
        if (i >= c.size() || s < 0)
            return;
        for (int j = i; j < c.size() && s >= c[j]; j++) {
            if (j > i && c[j] == c[j - 1])
                continue;
            ds.push_back(c[j]);
            fn(j + 1, s - c[j], ds, ans, c);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(c.begin(), c.end());
        fn(0, target, ds, ans, c);
        return ans;
    }
};