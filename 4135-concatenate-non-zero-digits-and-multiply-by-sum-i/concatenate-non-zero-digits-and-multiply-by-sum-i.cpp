class Solution {
public:
    long long rev(int n){
        long long k=0;
        while(n){
            if(n%10) k=k*10+n%10;
            n/=10;
        }return k;
    }
    long long sumAndMultiply(int n) {
        int sum=0,k=n;
        while(k){
            sum+=k%10;
            k/=10;
        }k=rev(n);k=rev(k);
        long long p=1ll*sum*k;
        return p;
    }
};