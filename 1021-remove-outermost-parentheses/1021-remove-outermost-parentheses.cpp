class Solution {
public:
    string removeOuterParentheses(string s) {
        int i = 0;
        string res = "";
        for(int j = 0; j < s.size(); j++){
            if(s[j] == '('){
                i++;
                if(i > 1){
                    res += '(';
                }
            }
            else{
                i--;
                if(i >= 1){
                    res += ")";
                }
            }
        }
        return res;
    }
};