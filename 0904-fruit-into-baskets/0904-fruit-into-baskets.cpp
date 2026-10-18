class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left=0,maxCnt=0,right=0;
        unordered_map<int,int> mp;
        while(right<fruits.size()){
            mp[fruits[right]]++;
            while(mp.size()>2){
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0){
                    mp.erase(fruits[left]);
                }
                left++;
            }
            
            maxCnt=max(maxCnt,right-left+1);
            right++;
        }
        return maxCnt;

        
    }
};