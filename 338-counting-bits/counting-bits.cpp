class Solution {
public:
    int fn(int n){
        if(n==0) return 0;
        int c=0;
        while(n){
            if(n&1) c++;
            n=n>>1;
        }return c;
    }
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for(int i=0;i<=n;i++){
            ans[i]=fn(i);
        }return ans;
    }
};