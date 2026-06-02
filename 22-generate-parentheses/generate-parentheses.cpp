class Solution {
public:
    void fn(vector<string>& ans,string &d,int n,int o,int c){
        if(n==0){ans.push_back(d);return;}
        if(o>0){
            d.push_back('(');
            fn(ans,d,n-1,o-1,c);
            d.pop_back();
        }if(o<c){
            d.push_back(')');
            fn(ans,d,n-1,o,c-1);
            d.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string d;
        fn(ans,d,2*n,n,n);
        return ans;
    }
};