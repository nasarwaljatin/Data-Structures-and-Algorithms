class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size(),maxi=0,sum=0;
        vector<int> numi(n);
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            numi[i]=maxi;
        }maxi=0;for(int i=n-1;i>=0;i--){
            maxi=max(maxi,nums[i]);
            numi[i]=min(numi[i],maxi);
        }for(int i=0;i<n;i++){
            if(numi[i]<nums[i]) continue;
            else{
                sum+=(numi[i]-nums[i]);
            }
        }return sum;

    }
};