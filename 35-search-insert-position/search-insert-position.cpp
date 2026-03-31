class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int n=nums.size(),low=0,high=n-1,mid,ans=n;
        while(low<=high){
            mid=(low+high)>>1;
            if(nums[mid]>=t) {ans=mid;high=mid-1;}
            else low=mid+1;
        }return ans;
    }
};