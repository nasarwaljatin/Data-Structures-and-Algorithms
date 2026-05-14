class Solution {
public:
    bool isValid(string s) {
        int n=s.size(),i=0;
        stack<char> st;
        while(i<n){
            if(s[i]=='(' || s[i]=='{' || s[i]=='[') st.push(s[i]);
            else{
                if((s[i]==')' && (!st.empty() && st.top()=='(')) || (s[i]=='}' && (!st.empty() && st.top()=='{')) || (s[i]==']' && (!st.empty() && st.top()=='[')) ) st.pop();
                else return false;
            }i++;
        }if(st.empty()) return true;
        else return false;
    }
};