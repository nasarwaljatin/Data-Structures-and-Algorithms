class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size(),maxa=-1,maxb=-1,sum=0;
        vector<int> a(n,-1),b(n,-1);
        for(int i=1;i<n;i++){
            a[i]=max(a[i-1],nums[i-1]);
        }for(int i=n-2;i>=0;i--){
            b[i]=max(b[i+1],nums[i+1]);
        }for(int i=0;i<n;i++){
            if(nums[i]<min(a[i],b[i])) sum+=min(a[i],b[i])-nums[i];
        }return sum;
    }
};