class Solution {
public:
    int longestPalindrome(vector<string>& words){
        unordered_map<string, int> s;
        int c = 0;
        for(auto word: words){
            if(s[{word[1], word[0]}]){
                c += 4;
                s[{word[1], word[0]}]--;
            }
            else{
                s[word]++;
            }
        }
        for(auto x: s){
            if(x.first[0] == x.first[1]){
                c += 2;
                break;
            }
        }
        return c;
    }
};