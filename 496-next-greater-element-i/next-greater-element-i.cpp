class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        vector<int> t(nums2.size()),ans;
        for(int i=nums2.size()-1;i>=0;i--){
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }if (st.empty())
                t[i] = -1;
            else
                t[i] = st.top();

            st.push(nums2[i]);
        }
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]) ans.push_back(t[j]);
                else continue;
            }
        }return ans;
    }
};