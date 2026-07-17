class Solution {
public:
    bool judgeSquareSum(int c) {
        unordered_set<long long> st;
        for (long long i = 0; i * i <= c; i++) {
            long long sq = i * i;
            st.insert(sq);
            if (sq == c || st.count(c - sq))
            return true;
        }return false;
    }
};