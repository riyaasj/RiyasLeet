class Solution {
public:
    string removeDigit(string number, char digit) {
        string res = "0";
        for(int i = 0; i < number.size(); i++){
            if(number[i] == digit){
                if(number.substr(0, i) + number.substr(i + 1, number.size() - i - 1) > res){
                    res = number.substr(0, i) + number.substr(i + 1, number.size() - i - 1);
                }
            }
        }
        return res;
    }
};