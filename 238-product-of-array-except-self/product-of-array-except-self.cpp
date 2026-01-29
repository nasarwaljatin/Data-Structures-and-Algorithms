class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(),prod=1;
        map<int,int> pp,sp;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            pp[i]=prod;
            prod*=nums[i];
        }prod=1;
        for(int i=n-1;i>=0;i--){
            sp[i]=prod;
            prod*=nums[i];
        }for(int i=0;i<n;i++){
            ans[i]=pp[i]*sp[i];
        }return ans;
    }
};