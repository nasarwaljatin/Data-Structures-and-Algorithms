class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1;
        if(n==1) return 10;
        int p=9;
        for(int i=1;i<n;i++){
            p=p*(9-i+1);
        }return p+countNumbersWithUniqueDigits(n-1);
    }
};