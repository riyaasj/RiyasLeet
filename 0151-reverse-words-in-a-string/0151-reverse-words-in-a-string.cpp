class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        int l = 0;
        while(s[l] == ' '){
            l++;
        }
        string temp = "";
        while(l < s.size()){
            if(s[l] == ' '){
                temp = "";
                while(s[l] == ' '){
                    l++;
                }
            }
            while(l < s.size() && s[l] != ' '){
                temp += s[l];
                l++;
            }
            if (!temp.empty()) {
                v.push_back(temp);
            }
        }
        string res = "";
        for(int i = v.size() - 1; i >= 0; i--){
            res += v[i];
            if(i != 0){
                res += ' ';
            }
        }
        return res;
    }
};