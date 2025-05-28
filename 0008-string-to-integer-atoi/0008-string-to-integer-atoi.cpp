class Solution {
public:
    int myAtoi(string s) {
        int x = 0, f = 0, res = 0;
        while(s[x] == ' '){
            x++;
        }
        if(s[x] == '-'){
            f = 1;
            x++;
        }
        if(s[x] == '+'){
            x++;
        }
        while(s[x] == '0'){
            x++;
        }
        while(s[x] >= '0' && s[x] <= '9'){
            res = res * 10 + (s[x] - '0');
            x++;
        }
        if(f){
            return 0 - res;
        }
        return res;
    }
};