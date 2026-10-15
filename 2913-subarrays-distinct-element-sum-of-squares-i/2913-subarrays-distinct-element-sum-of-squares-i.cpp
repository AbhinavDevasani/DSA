class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            vector<int> freq(101,0);
            int dist=0;
            for(int j=i;j<nums.size();j++){
                if(freq[nums[j]]==0){
                    dist++;
                }
                freq[nums[j]]++;
                ans+=dist*dist;
            }
            
        }
        return ans;
    }
};