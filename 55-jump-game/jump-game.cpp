class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size(),maxi=0;
        for(int i=0;i<n;i++){
            if(maxi>=i) maxi=max(i+nums[i],maxi);
            else return false;
        }return true;
    }
};