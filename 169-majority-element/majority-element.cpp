class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(),f=0,c=0;
        for(int i=0;i<n;i++){
            if(f==0) {c=nums[i];f++;}
            else if(nums[i]==c) f++;
            else f--;
        }return c;
    }
};