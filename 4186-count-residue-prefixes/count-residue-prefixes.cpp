class Solution {
public:
    int residuePrefixes(string s) {
        unordered_set<int> st;
        int c=0;
        for(int i=0;i<s.size();i++){
            st.insert(s[i]);
            int l=i+1;
            if(st.size()==l%3) c++;
        }return c;
    }
};