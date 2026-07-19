class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1) return s;
        if(n==2) return s+m;
        if(n%2) n=n-1;
        return 1LL*(1LL*(s+m)+1LL*((n-1)/2)*(m-1));
    }
};