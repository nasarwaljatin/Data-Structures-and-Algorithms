class Solution {
public:
    vector<int> visited;
    void dfs(vector<list<int>>& nums,int u){
        visited[u]=true;
        for(int v:nums[u]) if(!visited[v]) dfs(nums,v);
        return;
    }
    int findCircleNum(vector<vector<int>>& num) {
        visited.resize(num.size(),0);
        int c=0;
        vector<list<int>> nums(num.size());
        for(int i=0;i<num.size();i++){
            for(int j=i+1;j<num.size();j++){
                if(num[i][j]) {nums[i].push_back(j);nums[j].push_back(i);}
            }
        }
        for(int i=0;i<num.size();i++){
            if(!visited[i]){ dfs(nums,i); c++; }
        }return c;
    }
};