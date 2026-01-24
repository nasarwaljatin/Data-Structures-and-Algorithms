class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),i=0,j=0,maxi=0;
        vector<int> hash(256,-1);
        while (j < n) {
            if(hash[s[j]]!=-1){
                if(hash[s[j]]>=i) i=hash[s[j]]+1;
            }maxi=max(maxi,j-i+1);
            hash[s[j]]=j;j++;
        }return maxi;
    }
};