class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        int n=nums.size(),i=0,j=0,c=0;
        map<int,int> mpp;
        while(j<n){
            mpp[nums[j]]++;
            while(mpp.size()>k){
                mpp[nums[i]]--;
                if(!mpp[nums[i]]) mpp.erase(nums[i]);
                i++;
            }c+=(j-i+1);
            j++;
        }return c;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atMost(nums,k)-atMost(nums,k-1);
    }
};