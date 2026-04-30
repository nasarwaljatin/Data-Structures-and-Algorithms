class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        vector<int> ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minH;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }for(auto it : mpp){
            minH.push({it.second,it.first});
            if(minH.size()>k) minH.pop();
        }while(minH.size()){
            ans.push_back(minH.top().second);
            minH.pop();
        }return ans;
    }
};