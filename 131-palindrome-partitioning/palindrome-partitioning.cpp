class Solution {
public:
    bool isValid(string& s,int i,int j){
        while(i<=j){
            if(s[i]==s[j]){i++;j--;continue;}
            else return false;
        }return true;
    }
    void fn(vector<vector<string>>& ans, vector<string>& d, string& s, int k){
        if(k==s.size()){ans.push_back(d);return;}
        for(int i=k;i<s.size();i++){
            if(isValid(s,k,i)){
                d.push_back(s.substr(k,i-k+1));
                fn(ans,d,s,i+1);
                d.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> d;
        fn(ans,d,s,0);
        return ans;
    }
};