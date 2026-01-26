class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size(), i = 0, j = 0, maxi = 0, maxf = 0;
        vector<int> hash(26, 0);
        while (j < n) {
            hash[s[j] - 'A']++;
            maxf = max(maxf, hash[s[j] - 'A']);
            if((j - i + 1) - maxf > k) {
                hash[s[i] - 'A']--;
                maxf = 0;i++;
            }
            if ((j - i + 1) - maxf <= k)
                maxi = max(maxi, j - i + 1);
            j++;
        }
        return maxi;
    }
};