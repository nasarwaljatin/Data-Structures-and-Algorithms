class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        int n=nums.size(),large=0,small=0,i=0;
        if(k>n) k=n%k;
        sort(nums.begin(),nums.end());
        for(i=0;i<k;i++){
            large+=nums[i];
        }i=n-1;
        while(k--){
            small+=nums[i];
            i--;
        }return abs(large-small);
    }
};