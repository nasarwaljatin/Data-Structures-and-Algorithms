class Solution {
public:
    vector<int> twoSum(vector<int>& A, int t) {
        int n=A.size(),i=0,j=n-1;
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            if(mpp.find(t-A[i])!=mpp.end() && i!=mpp[t-A[i]]) return {i,mpp[t-A[i]]};
            mpp[A[i]]=i;
        }return {};
    }
};