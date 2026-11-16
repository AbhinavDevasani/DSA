class Solution {
public:
    string digitSum(string s, int k) {
        
        while(s.size()>k){
            string temp1="";
            int temp=0;
            int cnt=0;
            for(int i=0;i<s.size();i++){
                temp+=s[i]-'0';
                cnt++;
                if(cnt==k){
                    temp1+=to_string(temp);
                    cnt=0;
                    temp=0;
                }
                
                
            }
            if(cnt>0){
                    temp1+=to_string(temp);
                }
            s=temp1;
        }
    return s;
    }
};