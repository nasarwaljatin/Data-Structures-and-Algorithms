class Solution {
public:
    void fn(const string& s,vector<string>& ans,string& d,int i){
        if(i>=s.size()){ans.push_back(d);return;}
        if(isdigit(s[i])){
            d.push_back(s[i]);
            fn(s,ans,d,i+1);
            d.pop_back();
        }else{
            if(isupper(s[i])){
                d.push_back(tolower(s[i]));
                fn(s,ans,d,i+1);
                d.pop_back();
                d.push_back(toupper(s[i]));
                fn(s,ans,d,i+1);
                d.pop_back();
            }else{
                d.push_back(toupper(s[i]));
                fn(s,ans,d,i+1);
                d.pop_back();
                d.push_back(tolower(s[i]));
                fn(s,ans,d,i+1);
                d.pop_back();
            }
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        string d;
        fn(s,ans,d,0);
        return ans;
    }
};