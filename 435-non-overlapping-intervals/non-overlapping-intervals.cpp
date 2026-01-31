class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& nums) {
        int n=nums.size(),c=1;
        vector<pair<int,int>> combo(n);
        for(int i=0;i<n;i++) combo[i]={nums[i][1],nums[i][0]};
        sort(combo.begin(),combo.end());
        int lend=combo[0].first;
        for(int i=1;i<n;i++){
            if(lend <= combo[i].second ){c++;lend=combo[i].first;}
        }return n-c;
    }
};