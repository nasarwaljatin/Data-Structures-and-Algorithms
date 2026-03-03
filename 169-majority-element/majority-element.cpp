class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),c=0,k=0;
        for(int i=0;i<n;i++){
            if(c==0) {k=nums[i];c++;}
            else if(k==nums[i]) c++;
            else c--;
        }return k;
    }
};