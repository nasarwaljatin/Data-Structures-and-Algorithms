class Solution {
public:
    string convert(string s, int k) {
        int n=s.size(),p=k*2-2,w=p,row=0;
        if(n<=1 || k==1) return s;
        string ans;
        while(k--){
            int i=row;
            while(i<n){
                ans.push_back(s[i]);
                if (p != w && w != 0 && i + w < n) ans.push_back(s[i + w]);
                i+=p;
            }w-=2;row++;
        }return ans;
    }
};