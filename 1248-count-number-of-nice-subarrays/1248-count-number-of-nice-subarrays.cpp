class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int left1=0,left2=0,right=0,cnt1=0,cnt2=0;
        int ans=0;
        while(right<nums.size()){
            if(nums[right]%2!=0){
                cnt1++;
                cnt2++;
            }
            while(cnt1>k){
                if(nums[left1]%2!=0) cnt1--;
                left1++;
            }
            while(cnt2>k-1){
                if(nums[left2]%2!=0) cnt2--;
                left2++;
            }
            ans+=left2-left1;
            right++;
        }
        return ans;

    }
};