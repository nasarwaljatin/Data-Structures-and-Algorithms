class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size(),prod=1;
        map<int,int> pp;
        vector<int> ans(n,1);
        for(int i=0;i<n;i++){
            pp[i]=prod;
            prod*=nums[i];
        }for(int i=0;i<n;i++){
            ans[i]*=pp[i];
            pp[i]=1;
        }prod=1;
        for(int i=n-1;i>=0;i--){
            pp[i]=prod;
            prod*=nums[i];
        }for(int i=0;i<n;i++){
            ans[i]*=pp[i];
            pp[i]=1;
        }return ans;
    }
};