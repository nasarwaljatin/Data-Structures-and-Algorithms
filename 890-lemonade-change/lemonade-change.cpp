class Solution {
public:
    bool lemonadeChange(vector<int>& ba) {
        int a=0,b=0;
        if(ba[0]!=5) return false;
        for(int i=0;i<ba.size();i++){
            if(ba[i]==5) a++;
            else if(ba[i]==10){
                if(a){a--;b++;}
                else return false;
            }else{
                if(a&&b){a--;b--;}
                else if(a>2){a-=3;}
                else return false;
            }
        }return true;
    }
};