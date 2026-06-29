class Solution {
public:
    vector<int> visited;
    void dfs(vector<vector<int>>& nums,int u){
        visited[u]=true;
        for(int v=0;v<nums.size();v++){
            if(nums[u][v] && !visited[v]) dfs(nums,v);
        }
    }
    int findCircleNum(vector<vector<int>>& num) {
        visited.resize(num.size(),0);
        int c=0;
        for(int i=0;i<num.size();i++){
            if(!visited[i]){ dfs(num,i); c++; }
        }return c;
    }
};