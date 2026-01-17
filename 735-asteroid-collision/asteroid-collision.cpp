class Solution {
public:
    vector<int> asteroidCollision(vector<int>& nums) {
        int n=nums.size();stack<int> st;
        for(int i=0;i<n;i++){
            bool destroyed = false;
            while(!st.empty() && (st.top()>0 && nums[i]<0)){ 
                if(abs(st.top())<abs(nums[i])) st.pop();
                else if(abs(st.top())>abs(nums[i])) {destroyed=true;break;}
                else{
                    st.pop();
                    destroyed=true;
                    break;
                }
            }
            if (!destroyed) {
                st.push(nums[i]);
            }
        }vector<int> ans(st.size());
        for(int i=st.size()-1;i>=0;i--){
            ans[i]=st.top();
            st.pop();
        }
        return ans;
    }
};