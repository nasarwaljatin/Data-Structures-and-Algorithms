class Solution {
public:
    void fn(const string nums,vector<string> &ans,vector<string>& s,string& d,int i){
        if(i==nums.size()){ans.push_back(d);return;}
        for(int j=0;j<s[nums[i]-'0'].size();j++){
            d.push_back(s[nums[i]-'0'][j]);
            fn(nums,ans,s,d,i+1);
            d.pop_back();
            // fn(nums,ans,s,d,i+1);
        }
    }
    vector<string> letterCombinations(string nums) {
        if(nums.empty()) return {};
        vector<string> s={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> ans;
        string d;
        fn(nums,ans,s,d,0);
        return ans;
    }
};