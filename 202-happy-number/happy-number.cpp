class Solution {
public:
    int sumsqdigits(int n) {
        int k = 0;
        while (n > 0) {
            k += (n % 10) * (n % 10);
            n /= 10;
        }
        return k;
    }
    bool isHappy(int n) {
        unordered_set<int> seen;
        while (n != 1 && !seen.count(n)) {
            seen.insert(n);
            n = sumsqdigits(n);
        }
        return n == 1;
    }
};