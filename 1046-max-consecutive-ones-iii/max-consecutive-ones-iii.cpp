class Solution {
public:
    int longestOnes(vector<int>& A, int k) {
        int n=A.size(),i=0,j=0,c=0,maxi=INT_MIN;
        while(j<n){
            int ws=j-i+1;
            if(A[j]==1) c++;
            if(k>=ws-c){
                j++;
                // if(A[j]==1) c++;
                maxi=max(maxi,j-i);
            }else{
                if(A[i]==1) c--;
                i++;
                maxi=max(maxi,j-i);
            }
        }return maxi;
    }
};