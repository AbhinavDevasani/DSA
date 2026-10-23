class Solution {
public:
    int sortPermutation(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                ans=nums[i];
                break;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                ans=ans&nums[i];
            }
        }
        return ans;
    }
};