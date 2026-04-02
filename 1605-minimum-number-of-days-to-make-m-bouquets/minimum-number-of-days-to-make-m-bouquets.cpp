class Solution {
public:
    bool isP(vector<int>& nums, int m, int k, int d){
        int c=0,n=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<=d) c++;
            else{n+=(c/k);c=0;}  }
            n+=c/k;
            if(n>=m) return true;
            else return false;
        
    }
    int minDays(vector<int>& nums, int m, int k) {
        int n=nums.size(),low=*min_element(nums.begin(),nums.end()),high=*max_element(nums.begin(),nums.end()),mid;
        if((long long)m * k > n) return -1;
        while(low<=high){
            mid=(low+high)>>1;
            if(isP(nums,m,k,mid)) high=mid-1;
            else low=mid+1;
        }return low;
    }
};