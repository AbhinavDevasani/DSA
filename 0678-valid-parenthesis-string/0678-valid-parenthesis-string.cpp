class Solution {
public:
    bool checkValidString(string s) {
        int cnt1=0,cnt2=0;
        for(char c :s){
            if(c=='('){
                cnt1++;
                cnt2++;
            }
            else if(c=='*'){
                cnt1--;
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
            if(cnt1<0) cnt1=0;
            if(cnt2<0)return false;

        }
        if(cnt1==0) return true;
        return false;

    }
};