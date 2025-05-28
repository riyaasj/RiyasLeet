class Solution {
public:
    int romanToInt(string s) {
        int res = 0;
        int x = 0;
        int k;
        for(int i = s.length() - 1; i >= 0; i--){
            if(s[i] == 'I'){
                x = 1;
            }
            else if(s[i] == 'V'){
                x = 5;
            }
            else if(s[i] == 'X'){
                x = 10;
            }
            else if(s[i] == 'L'){
                x = 50;
            }
            else if(s[i] == 'C'){
                x = 100;
            }
            else if(s[i] == 'D'){
                x = 500;
            }
            else{
                x = 1000;
            }
            if(i + 1 <= s.length() - 1 && k > x){
                res = res - x;
            }
            else{
                res = res + x;
            }
            k = x;
           
        }
        return res;
    }
            
};