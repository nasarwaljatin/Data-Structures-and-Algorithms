class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>> maxH;
        unordered_map<char,int> mpp;
        string ans;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }for(auto it:mpp){
            char a=it.first;
            int n=it.second;
            maxH.push({n,a});
        }while(!maxH.empty()){
            int n=maxH.top().first;
            char a=maxH.top().second;
            maxH.pop();
            while(n--) ans+=a;
        }return ans;
    }
};