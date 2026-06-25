class Solution {
public:
    string removeOuterParentheses(string s) {
        int n=s.size(),c=0;
        string ans;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(c>0) ans+=s[i];
                c++;
            }
            else{
                c--;
                if(c>0) ans+=s[i];
            }
        }return ans;
    }
};