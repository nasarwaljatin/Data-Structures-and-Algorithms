class Solution {
public:
    bool isAnagram(string s, string t) {
        int sn=s.size(),tn=t.size();
        if(sn!=tn) return false;
        sort(s.begin(),s.end());sort(t.begin(),t.end());
        for(int i=0;i<tn;i++){
            if(s[i]==t[i]) continue;
            else return false;
        }return true;
    }
};