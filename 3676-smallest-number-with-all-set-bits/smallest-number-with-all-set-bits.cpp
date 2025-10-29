class Solution {
public:
    int fn(int n){
        int k=0,t=n;
        while(t--){
            k+=pow(2,n-1);n--;
        }return k;
    }
    int smallestNumber(int n) {
        return fn(log2(n)+1);
    }
};