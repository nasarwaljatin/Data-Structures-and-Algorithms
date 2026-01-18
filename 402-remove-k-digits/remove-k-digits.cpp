class Solution {
public:
    string removeKdigits(string num, int p) {
        stack<char> st;
        string k;
        for (int i = 0; i < num.size(); i++) {
            while (!st.empty() && p > 0 && st.top() > num[i]) {
                st.pop();
                p--;
            }
            st.push(num[i]);
        }
        while (p > 0 && !st.empty()) {
            st.pop();
            p--;
        }

        while (!st.empty()) {
            k += st.top();
            st.pop();
        }
        reverse(k.begin(), k.end());
        int i = 0;
        while(i < k.size() && k[i] == '0') i++;
        k = k.substr(i);
        return k.empty() ? "0" : k;
    }
};