class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        int n=nums.size(),c=1;
        sort(nums.begin(), nums.end(),
             [](vector<int>& a, vector<int>& b){
                 return a[1] < b[1];
             });
        int lend=nums[0][1];
        for(int i=1;i<n;i++){
            if(lend <= nums[i][0] ){c++;lend=nums[i][1];}
        }return n-c;
    }
};