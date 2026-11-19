class Solution {
public:
    bool isPrime(int n){
        if(n<2) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;

    }
    int maximumPrimeDifference(vector<int>& nums) {
        int primes=0;
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(isPrime(nums[i])){
                v.push_back(i);
                primes++;
            }
        }
        if(primes==1) return 0;
        return v[v.size()-1]-v[0];
    }
};