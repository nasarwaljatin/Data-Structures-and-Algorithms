class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size(),ind=-1;
        if(n<=1) return;
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]) {ind=i-1;break;}
            else continue;
        }if(ind==-1) {reverse(nums.begin(),nums.end());return;}
        for(int i=n-1;i>ind;i--){
            if(nums[i]>nums[ind]){swap(nums[i],nums[ind]);break;}
        }reverse(nums.begin()+ind+1,nums.end());
    }
};