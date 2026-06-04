class Solution {
public:
    void fn(vector<vector<int>>& ans,vector<int>& d,int k,int n,int sum,int idx){
        if(sum==n && d.size()==k){
            ans.push_back(d);
            return;
        }for(int i=idx;i<=9 && i<n;i++){
            d.push_back(i);
            fn(ans,d,k,n,sum+i,i+1);
            d.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> d;
        fn(ans,d,k,n,0,1);
        return ans;
    }
};