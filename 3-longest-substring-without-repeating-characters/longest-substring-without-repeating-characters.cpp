class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),i=0,j=0,maxi=0;
        unordered_map<char,int> st;
        while (j < n) {
            st[s[j]]++;
            while (st[s[j]] > 1) {
                st[s[i]]--;
                i++;
            }maxi = max(maxi, j - i + 1);
            j++;
        }return maxi;
    }
};