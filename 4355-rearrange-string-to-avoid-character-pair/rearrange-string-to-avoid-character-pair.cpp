class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        vector<int> hash(256,0);
        string t;
        for(int i=0;i<s.size();i++) hash[s[i]]++;
        while(hash[y]){t.push_back(y);hash[y]--;}
        while(hash[x]){t.push_back(x);hash[x]--;}
        for(int i=0;i<256;i++){
            while(hash[i]){t.push_back(i);hash[i]--;}
        }return t;
    }
};