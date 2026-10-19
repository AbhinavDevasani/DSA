class Solution {
public:
    int numberOfSubstrings(string s) {
        int left=0,right=0,ans=0;
        int freq[3]={0};
        while(right<s.size()){
            freq[s[right]-'a']++;
            while(freq[0]>0&&freq[1]>0&&freq[2]>0){
                ans+=s.size()-right;
                freq[s[left]-'a']--;
                left++;
            }
            right++;
        }
        return ans;
    }
};