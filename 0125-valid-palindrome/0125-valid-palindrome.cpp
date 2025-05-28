class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0;
        string res = "";
        while(l < s.size()){
            if(isalnum(s[l])){
                res += tolower(s[l]);
            }
            l++;
        }
        l = 0;
        int r = res.size() - 1;
        while(l < r){
            if(res[l] != res[r]){
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};