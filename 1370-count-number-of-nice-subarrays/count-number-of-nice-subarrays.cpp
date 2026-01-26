class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        int n=nums.size(),i=0,j=0,odd=0,c=0;
        while(j<n){
            if(nums[j]%2==1) odd++;
            while(odd>k){
                if(nums[i]%2==1) odd--;
                i++;
            }c+=(j-i+1);
            j++;
        }return c;
    }int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums,k)-atMost(nums,k-1);
    }
};