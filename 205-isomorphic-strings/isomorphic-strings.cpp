class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        unordered_map<int,int> mpp,mppi;
        bool a=true,b=true;
        for(int i=0;i<n;i++){
            if(mpp.find(s[i])==mpp.end()) mpp[s[i]]=t[i];
            else{
                if(mpp[s[i]]==t[i]) continue;
                else {a=false;break;}
            }
        } for(int i=0;i<n;i++){
            if(mppi.find(t[i])==mppi.end()) mppi[t[i]]=s[i];
            else{
                if(mppi[t[i]]==s[i]) continue;
                else {b=false;break;}
            }
        }
        return a&&b;
    }
};