class Solution {
public:
    int longestPalindrome(vector<string>& words){
        unordered_map<string, int> s;
        int c = 0, d = 0;
        for(int i = 0; i < words.size(); i++){
            if(s.find({words[i][1], words[i][0]}) != s.end()){
                c += 4;
                if(--s[{words[i][1], words[i][0]}] == 0){
                    s.erase({words[i][1], words[i][0]});
                }

            }
            else{
                s[words[i]]++;
            }
            for(auto x: s){
                cout << x.first << " " << x.second << " ";
            }
            cout << "\n";
        }
        for(auto x: s){
            if(x.first[0] == x.first[1]){
                d = 2;
                break;
            }
        }
        return d + c;
    }
};