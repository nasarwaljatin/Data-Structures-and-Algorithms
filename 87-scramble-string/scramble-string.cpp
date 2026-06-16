class Solution {
public:
    unordered_map<string,bool> mpp;
    bool fn(string a, string b){
        if(a.compare(b)==0) return true;
        if(a.size()<=1) return false;
        string c=a+'$'+b;
        if(mpp.find(c)!=mpp.end()) return mpp[c];
        bool flag=false;
        int n=a.size();
        for(int i=1;i<n;i++){
            if((fn(a.substr(0,i),b.substr(n-i,i))&&fn(a.substr(i,n-i),b.substr(0,n-i)))||(fn(a.substr(0,i),b.substr(0,i))&&fn(a.substr(i,n-i),b.substr(i,n-i)))){flag=true;break;}
        }return mpp[c]=flag;
    }
    bool isScramble(string a, string b) {
        if(a==b) return true;
        if(a.size()!=b.size() || (!a.size() && b.size()) || (a.size() && !b.size())) return false;
        return fn(a,b);
    }
};