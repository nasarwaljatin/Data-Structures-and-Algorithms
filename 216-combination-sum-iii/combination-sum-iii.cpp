class Solution {
public:
    void fn(int i,int k,int s,vector<int> &c,vector<int> &ds,vector<vector<int>> &ans){
        
        if(s==0 && ds.size()==k){
            ans.push_back(ds);
            return;
        }if(s<0 || i>=c.size() || ds.size()>k) return;
        ds.push_back(c[i]);
        fn(i+1,k,s-c[i],c,ds,ans);
        ds.pop_back();
        fn(i+1,k,s,c,ds,ans);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> c={1,2,3,4,5,6,7,8,9};
        vector<int> ds;
        fn(0,k,n,c,ds,ans);
        return ans;
    }
};