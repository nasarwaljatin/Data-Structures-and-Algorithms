class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int> st;
        int maxi=0,element,n=h.size(),nse,pse;
        for(int i=0;i<n;i++){
            while(!st.empty() && h[st.top()]>h[i]){
                element=st.top();st.pop();
                nse=i;pse=st.empty() ? -1 : st.top();
                maxi=max(maxi,h[element]*(nse-pse-1));
                
            }st.push(i);
        }while(!st.empty()){
            nse=n;element=st.top();st.pop();
            pse=st.empty() ? -1 : st.top();
            maxi=max(maxi,h[element]*(nse-pse-1));
        }return maxi;
    }
};