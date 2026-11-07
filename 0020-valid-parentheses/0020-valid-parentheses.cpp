class Solution {
public:
    bool isValid(string s) {
        stack<int> ans;
        for(char c : s){
            if(c=='(') ans.push(')');
            else if(c=='[') ans.push(']');
            else if(c=='{') ans.push('}');
            else{
                if(ans.empty()||ans.top()!=c){
                    return false;
                }
                ans.pop();
            }

        }
        return ans.empty();
    }
};