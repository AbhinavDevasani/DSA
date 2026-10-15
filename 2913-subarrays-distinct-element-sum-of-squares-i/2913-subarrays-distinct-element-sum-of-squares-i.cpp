class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            set<int> dist;
            for(int j=i;j<nums.size();j++){
                dist.insert(nums[j]);
                int size=dist.size();
                ans+=size*size;
            }
        }
        return ans;
    }
};