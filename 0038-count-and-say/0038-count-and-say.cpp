class Solution {
public:
    string countAndSay(int n) {
        if(n == 1){
            return "1";
        }
        string result, x = countAndSay(n - 1);
        int i = 0;
        while(i < x.length()){
            int count = 0;
            int num = x[i];
            while(i < x.length() && x[i] == num){
                count++;
                i++;
            }
            result += to_string(count);
            result += num;   
        }
        return result;
    }
};