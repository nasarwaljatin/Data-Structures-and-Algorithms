class Solution {
public:
    const long long mod=1e9+7;
    long long pow(long long x,long long n){
        long long ans=1;
        while(n){
            if(n%2) ans=(ans*x)%mod;
            x=(x*x)%mod;
            n=n>>1;
        }return ans;
    }
    int countGoodNumbers(long long n) {
        return (pow(4,n/2)*pow(5,(n+1)/2))%mod;
    }
};