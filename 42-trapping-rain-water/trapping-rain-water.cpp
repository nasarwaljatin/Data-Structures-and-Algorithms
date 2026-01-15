class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size(),sum=0,lmax=0,rmax=0;
        vector<pair<int,int>> tallest(n,{0,0});//left,right
        for(int i=n-1;i>=0;i--){
            tallest[i].second=rmax;
            rmax=max(rmax,h[i]);
        }
        for(int i=0;i<n;i++){
            tallest[i].first=lmax;
            lmax=max(lmax,h[i]);
        }for(int i=0;i<n;i++){
            int k=min(tallest[i].first,tallest[i].second);
            if (k > h[i]) {
                sum += k - h[i];
            }
        }return sum;
    }
};