class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size(),i=0,j=n-1;
        while(j>=0 && i<=j){
            if(num[j]%2==0) j--;
            else break;
        }if(j<0) return "";
        return num.substr(i,j-i+1);
    }
};