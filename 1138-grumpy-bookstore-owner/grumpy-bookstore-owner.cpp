class Solution {
public:
    int maxSatisfied(vector<int>& cust, vector<int>& grumpy, int m) {
        int n=cust.size(),sum=0,maxi=INT_MIN;
        for(int i=0;i<n;i++) if(!grumpy[i]) sum+=cust[i];
        int i=0,j=i+m-1;
        if(j>=n && m>=n){ for(int p=0;p<n;p++) if(grumpy[p]) sum+=cust[p];
        return sum;}
        while(j<n){
            for(int k=i;k<=j;k++) if(grumpy[k]) sum+=cust[k];
            maxi=max(maxi,sum);
            for(int k=i;k<=j;k++) if(grumpy[k]) sum-=cust[k];
            i++;j++;}
        return max(maxi,sum);
    }
};