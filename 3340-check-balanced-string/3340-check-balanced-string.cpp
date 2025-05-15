class Solution {
public:
    bool isBalanced(string num) {
        int x = 0;
        for(int i = 0; i < num.size(); i = i + 2){
            x += num[i] - '0';
            if(i + 1 < num.size()){
                x -= num[i + 1] - '0';
            }
        }
        return !x;
    }
};