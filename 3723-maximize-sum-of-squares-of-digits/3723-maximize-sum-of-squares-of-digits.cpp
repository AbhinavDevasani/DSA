class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>9*num) return "";
        int nines=sum/9,rem=sum%9;
        string ans="";
        int count=0;

        while(num-->0){
            int digit=min(9,sum);
            ans+=digit+'0';
            sum-=digit;
        }
        return ans;


    }
};