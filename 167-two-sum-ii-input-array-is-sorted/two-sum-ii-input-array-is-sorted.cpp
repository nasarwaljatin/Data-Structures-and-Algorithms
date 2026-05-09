class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int n=nums.size(),i=0,j=n-1,s=0;
        while(i<j){
            s=nums[i]+nums[j];
            if(s==t) return {i+1,j+1};
            else if(s<t) i++;
            else j--;
        }return {};
    }
};