class Solution {
public:
    int romanToInt(string s) {
       int res = 0, k = -1;
        for(int i = 0; i < s.size(); i++){
            int x;
            switch(s[i]){
                case 'I': 
                    x = 1;
                    break;
                case 'V': 
                    x = 5;
                    break;
                case 'X': 
                    x = 10;
                    break;
                case 'L': 
                    x = 50;
                    break;
                case 'C': 
                    x = 100;
                    break;
                case 'D': 
                    x = 500;
                    break;
                case 'M': 
                    x = 1000;
                    break;
            }
            if(k != -1 && k < x){
                res -= 2 * k;
            }
            res += x;
            k = x;
       }
       return res;
    }           
};