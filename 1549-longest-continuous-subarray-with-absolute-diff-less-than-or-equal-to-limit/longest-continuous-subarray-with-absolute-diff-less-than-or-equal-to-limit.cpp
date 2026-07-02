class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n=nums.size(),i=0,ans=0;
        multiset<int> st;
        for(int j=0;j<n;j++){
            st.insert(nums[j]);
            while(*st.rbegin()-*st.begin() > limit){
                st.erase(st.find(nums[i]));
                i++;
            }ans=max(ans,j-i+1);
        }return ans;
    }
};