class Solution {
public:
    void fn(int i,int s,vector<int>& ds,vector<vector<int>>& ans,vector<int>& c){
        if(s==0) {ans.push_back(ds);
        return ;}
        if (i >= c.size() || s < 0) return;
        ds.push_back(c[i]);
        fn(i,s-c[i],ds,ans,c);
        ds.pop_back();
        fn(i+1,s,ds,ans,c);
    }
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        fn(0,target,ds,ans,c);
        return ans;
    }
};