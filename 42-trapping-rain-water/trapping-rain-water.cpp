class Solution {
public:
    int trap(vector<int>& h) {
        int n=h.size(),sum=0,lmax=0,rmax=0,l=0,r=n-1;
        vector<pair<int,int>> tallest(n,{0,0});//left,right
        while(l<r){
            rmax=max(rmax,h[r]);
            lmax=max(lmax,h[l]);
            if(lmax<rmax){sum+=lmax-h[l];l++;}
            else{sum+=rmax-h[r];r--;}
        }return sum;
    }
};