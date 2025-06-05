class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        for(char x: str){
            if(x == '{' || x == '(' || x == '['){
                s.push(x);
            }
            else if(x == '}'){
                if(s.empty() || s.top() != '{'){
                    return false;
                }
                else{
                    s.pop();
                }
            }
            else if(x == ']'){
                if(s.empty() || s.top() != '['){
                    return false;
                }
                else{
                    s.pop();
                }
            }
            else if(x == ')'){
                if(s.empty() || s.top() != '('){
                    return false;
                }
                else{
                    s.pop();
                }
            }
        }
        return s.empty();
    }
};