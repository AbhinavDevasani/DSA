class Solution {
public:
    int maxLength(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int prod=1;
            int g=0;
            int l=1;
            for(int j=i;j<nums.size();j++){
                prod*=1LL*nums[j];
                g=gcd(g,1LL*nums[j]);
                l=lcm(l,1LL*nums[j]);
                if(prod==g*l){
                    ans=max(ans,j-i+1);
                }
            }
        }
        return ans;
    }
};