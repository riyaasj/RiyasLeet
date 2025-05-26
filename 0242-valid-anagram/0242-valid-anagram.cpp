class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> x;
        for(char i: s){
            x[i]++;
        }
        for(char i: t){
            x[i]--;
            if(x[i] == 0){
                x.erase(i);
            }
        }
        if(x.empty()){
            return true;
        }
        return false;
    }
};