class Solution {
public:
    void PSE(vector<int>& A,vector<pair<int,int>>& e,int n){
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && A[st.top()]>A[i]) st.pop();
            if(st.empty()) e[i].first=-1;
            else e[i].first=st.top();
            st.push(i);
        } return;
    }void NSE(vector<int>& A,vector<pair<int,int>>& e,int n){
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && A[st.top()]>=A[i]) st.pop();
            if(st.empty()) e[i].second=n;
            else e[i].second=st.top();
            st.push(i);
        } return;
    }
    int sumSubarrayMins(vector<int>& A) {
        int n=A.size(),mod=(1e9 + 7),sum=0;
        vector<pair<int,int>> e(n);
        NSE(A,e,n);PSE(A,e,n);
        for(int i=0;i<n;i++){
            int left=i-e[i].first,right=e[i].second-i;
            long long freq = left*right*1LL;
            int val = (freq*A[i]*1LL) % mod;
            sum=(sum+val)%mod;
        }return sum;
    }
};