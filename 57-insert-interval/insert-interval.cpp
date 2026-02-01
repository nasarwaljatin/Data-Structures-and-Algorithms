class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& nums, vector<int>& news) {
        int n=nums.size(),i=0;
        vector<vector<int>> ans;
        while(i<n && nums[i][1]<news[0]){
            ans.push_back(nums[i]);i++;
        }while(i < n && nums[i][0]<=news[1]){
            news[0]=min(news[0],nums[i][0]);
            news[1]=max(news[1],nums[i][1]);i++;
        }ans.push_back(news);while(i<n){
            ans.push_back(nums[i]);i++;
        }
        return ans;
    }
};