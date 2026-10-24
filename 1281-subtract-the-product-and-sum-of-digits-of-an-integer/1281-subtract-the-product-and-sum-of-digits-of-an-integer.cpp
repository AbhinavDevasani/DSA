class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,mul=1;
        while(n!=0){
            int digit=n%10;
            mul=mul*digit;
            sum+=digit;
            n=n/10;
        }
        return mul-sum;
    }
};