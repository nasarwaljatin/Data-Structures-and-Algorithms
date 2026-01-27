class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int gn=g.size(),sn=s.size(),i=0,j=0,c=0;
        while(i<gn && j<sn){
            if(g[i]<=s[j]){i++;c++;}
            j++;
        }return c;
    }
};