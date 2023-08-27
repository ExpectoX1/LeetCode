class Solution {
public:
    string reverseWords(string s) {
        string temp  = "";
        string out = "";
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] != ' '){
                temp = temp + s[i];
            }
            else if(s[i] == ' ' && temp != ""){
                out = temp +" " + out ; 
                temp = "";  
            }
            else{
                continue;
            }
        }
        if(temp!=""){
            out = temp +" "+ out;
        }
        return out.substr(0,out.size()-1);
        
    }
};