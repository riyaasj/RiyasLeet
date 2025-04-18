class Solution {
public:
    string countAndSay(int n) {
        if(n == 1){
            return "1";
        }
        string r;
        int rindex = 0;
        string x = countAndSay(n - 1);
        int i = 0;
        while(i < x.length()){
            int c = 0;
            int num = x[i];
            while(i < x.length() && x[i] == num){
                c++;
                i++;
                cout << c;
            }
            r += to_string(c);
            r += num;
            
        }
        return r;
    }
};