class Solution {
public:
    long long isP(vector<int>& nums,int k){
        long long p=0;
        for(int i=0;i<nums.size();i++){
            p+=(nums[i]+k-1)/k;
        }return p;
    }
    int minEatingSpeed(vector<int>& nums, int h) {
        int n=nums.size(),low=1,high=*max_element(nums.begin(),nums.end()),mini=INT_MAX;
        while(low<=high){
            int mid = low + (high - low) / 2;
            if(isP(nums,mid)>h) low=mid+1;
            else high=mid-1;
        }return low;
    }
};