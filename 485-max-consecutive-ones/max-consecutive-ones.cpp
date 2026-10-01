class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size(),maxi=INT_MIN,l=0;
        for(int i=0;i<n;i++){
            if(nums[i]) l++;
            else l=0;
            maxi=max(maxi,l);
        }return maxi;
    }
};