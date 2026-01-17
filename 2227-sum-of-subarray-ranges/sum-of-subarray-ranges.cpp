class Solution {
public:
    vector<int> PGE(vector<int>& nums,int n){
        vector<int> ans(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]<=nums[i]) st.pop();
            ans[i]=st.empty() ? -1 : st.top();
            st.push(i);
        }return ans;

    }vector<int> NGEE(vector<int>& nums,int n){
        vector<int> ans(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]<nums[i]) st.pop();
            ans[i]=st.empty() ? n : st.top();
            st.push(i);
        }return ans;

    }vector<int> PSE(vector<int>& nums,int n){
        vector<int> ans(n);
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && nums[st.top()]>nums[i]) st.pop();
            ans[i]=st.empty() ? -1 : st.top();
            st.push(i);
        }return ans;

    }vector<int> NSEE(vector<int>& nums,int n){
        vector<int> ans(n);
        stack<int> st;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]>=nums[i]) st.pop();
            ans[i]=st.empty() ? n : st.top();
            st.push(i);
        }return ans;

    }long long maxi(vector<int>& nums,int n){
        vector<pair<int,int>> e(n);
        vector<int> PGEE=PGE(nums,n),NGE=NGEE(nums,n);
        long long sum=0;
        for(int i=0;i<n;i++){
            int left=i-PGEE[i],right=NGE[i]-i;
            sum += 1LL * left * right * nums[i];
        }return sum;
    }
    long long mini(vector<int>& nums,int n){
        vector<pair<int,int>> e(n);
        vector<int> PSEE=PSE(nums,n),NSE=NSEE(nums,n);
        long long sum=0;
        for(int i=0;i<n;i++){
            int left=i-PSEE[i],right=NSE[i]-i;
            sum+=1LL*left*right*nums[i];
        }return sum;
    }
    long long subArrayRanges(vector<int>& nums) {
        int n=nums.size();
        return maxi(nums, n) - mini(nums, n);
    }
};