class Solution {
public:
    int totalFruit(vector<int>& nums) {
        int n=nums.size(),i=0,j=0,maxi=0;
        map<int,int> mpp;
        while(j<n && i<n){
            mpp[nums[j]]++;
            if(mpp.size()>2){
                mpp[nums[i]]--;
                if (mpp[nums[i]] == 0)
                    mpp.erase(nums[i]);
                i++;
            }
            if(mpp.size()<=2) maxi=max(maxi,j-i+1);
            j++;
        }return maxi;
    }
};