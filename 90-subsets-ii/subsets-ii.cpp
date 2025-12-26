class Solution {
public:
    void fn(int i,set<vector<int>>& ans,vector<int>& ds,vector<int>& c){
    if(i==c.size()){
        ans.insert(ds);
        return;
    }ds.push_back(c[i]);
    fn(i+1,ans,ds,c);
    ds.pop_back();
    fn(i+1,ans,ds,c);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ansi;
        set<vector<int>> ans;
        vector<int> ds;
        fn(0,ans,ds,nums);
        for(auto it:ans){
            ansi.push_back(it);
        }
        return ansi;
    }
};