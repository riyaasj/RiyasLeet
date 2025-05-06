class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> x;
        for(char i: s){
            if(x.contains(i)){
                x[i]++;
            }
            x.insert({i, 1});
        }
        for(char i: t){
            if(!x.contains(i)){
                return false;
            }
            else{
                x[i]--;
                if(x[i] == 0){
                    x.erase(i);
                }
            }
            
        }
        if(x.empty()){
            return true;
        }
        return false;
    }
};