class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        int left1=0,left2=0,right=0,ans=0;
        unordered_map<int,int> mp1,mp2;
        while(right<nums.size()){
            mp1[nums[right]]++;
            mp2[nums[right]]++;
            while(mp1.size()>k){
                mp1[nums[left1]]--;
                if(mp1[nums[left1]]==0){
                    mp1.erase(nums[left1]);
                }
                left1++;
            }
            while(mp2.size()>k-1){
                mp2[nums[left2]]--;
                if(mp2[nums[left2]]==0){
                    mp2.erase(nums[left2]);
                }
                left2++;
            }
            ans+=left2-left1;
            right++;
        }
        return ans;
    }
};