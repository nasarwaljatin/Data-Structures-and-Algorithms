class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n=nums.size();
        if(n%k) return false;
        multiset<int> st;
        for(int i=0;i<n;i++){
            st.insert(nums[i]);
        }while(!st.empty()){
            int p=*st.begin();
            st.erase(st.begin());
            for(int i=1;i<k;i++){
                auto it = st.find(p+i);
                if(it!=st.end()) st.erase(it);
                else return false;
            }
        }return true;

    }
};