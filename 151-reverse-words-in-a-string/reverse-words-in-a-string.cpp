class Solution {
public:
    string reverseWords(string s) {
        int n=s.size(),i=n-1,j=n-1;
        string ans;
        while(i>=0 && j>=0){
            while(i>=0 && s[i]==' '){i--;j=i;}
            while(i>=0 && s[i]!=' ') i--;
            if(j>i) ans=ans+s.substr(i+1,j-i)+" ";
            i--;j=i;
        }if(!ans.empty()) ans.pop_back();
        return ans;
    }
};