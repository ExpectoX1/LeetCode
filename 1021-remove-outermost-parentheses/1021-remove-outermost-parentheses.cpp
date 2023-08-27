class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0;
        string out = "";
        for(int i = 0; i<s.size();i++){
            if(s[i] == '('){
                if(count>0)
                {
                    out = out + s[i];
                }
                count++;
            }
            else if(s[i] == ')'){
                count --;
                if(count>0)
                {
                    out = out +s[i];
                }

            }
        }
        return out;
        
    }
};