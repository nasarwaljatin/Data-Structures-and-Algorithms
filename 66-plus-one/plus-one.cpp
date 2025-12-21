class Solution {
public:
    vector<int> plusOne(vector<int>& A) {
        int i=0,c=1;
        reverse(A.begin(),A.end());
        while(c && i<A.size()){
            A[i]+=c;
            c=A[i]/10;
            A[i]%=10;
            i++;
        }if(c) A.push_back(c);
        reverse(A.begin(),A.end());
        return A;
    }
};