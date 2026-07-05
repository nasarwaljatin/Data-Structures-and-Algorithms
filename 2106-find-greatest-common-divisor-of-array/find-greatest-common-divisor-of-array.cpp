class Solution {
public:
    int gcd(int a,int b){
        if(!a||!b) return max(a,b);
        return gcd(max(a,b)-min(a,b),min(a,b));
    }
    int findGCD(vector<int>& nums) {
        return gcd(*max_element(nums.begin(),nums.end()),*min_element(nums.begin(),nums.end()));
    }
};