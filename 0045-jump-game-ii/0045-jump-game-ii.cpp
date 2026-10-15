class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size()-1;
        int jumps=0;
        for(int i=0;i<n;){
            int maxi=-1;
            int index=i;
            int iterations=i+nums[i];
            for(int j=i+1;j<=min(n,iterations);j++){
                if(j+nums[j]>maxi){
                    maxi=j+nums[j];
                    index=j;
                }
                
            }
            if(i+nums[i]>=n){
                jumps++;
                break;
            }
            if(index==i) return -1;
            i=index;
            jumps++;
        }
        return jumps;
    }

};