class Solution {
public:
    bool canAliceWin(int n) {
        int start=10;
        int steps=0;
        while(n>=0){
            n=n-start;
            start--;
            steps++;
        }
        if(steps%2==0){
            return true;
        }
        return false;

        
    }
};