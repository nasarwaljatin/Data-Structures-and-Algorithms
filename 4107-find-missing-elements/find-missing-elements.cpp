class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size(),k;
        sort(nums.begin(),nums.end());
        if(n>0) k=nums[0];
        else return ans;
        for(int i=1;i<n;i++){
            while(k + 1 < nums[i]){
                ans.push_back(k + 1);
                k++;
            }
            k = nums[i];
        }return ans;
    }
};