class Solution {
public:
    int kthGrammar(int n, int k) {
        if(n==0 || k==0) return 0;
        if(k%2==0) return !kthGrammar(n-1,(k+1)/2);
        else return kthGrammar(n-1,(k+1)/2);
    }
};