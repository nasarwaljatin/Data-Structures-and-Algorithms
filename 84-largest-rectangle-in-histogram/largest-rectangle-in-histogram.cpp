class Solution {
public:
    vector<int> findPSE(vector<int>& h,int n){
        vector<int> ans(n,0);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && h[st.top()]>h[i]) st.pop();
            ans[i]=st.empty() ? -1 : st.top();
            st.push(i);
        }return ans;
    }vector<int> findNSE(vector<int>& h,int n){
        vector<int> ans(n,0);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && h[st.top()]>=h[i]) st.pop();
            ans[i]=st.empty() ? n : st.top();
            st.push(i);
        }return ans;
    }int largestRectangleArea(vector<int>& h) {
        int maxi=0;
        vector<int> pse=findPSE(h,h.size()),nse=findNSE(h,h.size());
        for(int i=0;i<h.size();i++){
            maxi=max(maxi,h[i]*(nse[i]-pse[i]-1));
        }return maxi;
    }
};