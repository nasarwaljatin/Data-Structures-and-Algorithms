class Solution {
public:
    int maxScore(vector<int>& nums, int k) {
        int n=nums.size(),sum=0,maxi,i=0,j=n-k,sumi;
        for(int i=0;i<n;i++){sum+=nums[i];}
        sumi=sum;
        for(int p=0;p<j;p++){sumi-=nums[p];}
        maxi = sumi;
        while(j<n){
            sumi-=nums[j++];
            sumi+=nums[i++];
            maxi=max(maxi,sumi);
        }return maxi;

    }
};