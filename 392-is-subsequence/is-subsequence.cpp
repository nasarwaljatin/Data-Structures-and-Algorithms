class Solution {
public:
    bool isSubsequence(string s, string t) {
        int tn=t.size(),sn=s.size(),j=0;
        for(int i=0;i<tn;i++){
            if(t[i]==s[j]) j++;
            else continue;
        }return j>=sn;
    }
};