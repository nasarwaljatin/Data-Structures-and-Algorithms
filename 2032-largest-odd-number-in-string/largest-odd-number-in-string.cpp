class Solution {
public:
    string largestOddNumber(string num) {
        while(num.size() && num[num.size()-1]%2==0){
            num.pop_back();
        }return num;
    }
};