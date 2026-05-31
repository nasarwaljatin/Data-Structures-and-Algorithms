class Solution {
public:
    typedef pair<int,int> t;
    int findMaximizedCapital(int k, int w, vector<int>& p, vector<int>& c) {
        int n = p.size();
        priority_queue<t,vector<t>,greater<t>> minH;
        priority_queue<int> maxH;
        for (int i = 0; i < n; i++) {
           minH.push({c[i],p[i]});
        }while(k--){
            while(!minH.empty() && minH.top().first<=w){
                maxH.push(minH.top().second);
                minH.pop();
            }if(maxH.empty()) break;
            w+=maxH.top();
            maxH.pop();
        }
        return w;
    }
};
