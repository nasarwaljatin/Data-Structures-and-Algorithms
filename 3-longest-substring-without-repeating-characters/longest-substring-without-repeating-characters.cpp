class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size(),i=0,j=0,maxi=0;
        set<char> st;
        while(j<n){
            if (st.find(s[j]) == st.end()) {
                st.insert(s[j]);
                maxi = max(maxi, j - i + 1);
                j++;
            } else {
                st.erase(s[i]);
                i++;
            }
        }return maxi;
    }
};