
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = strs[0];
        for(int i = 1; i < strs.size(); i++){
            int x = 0;
            string temp = "";
            while(x < res.size() && x < strs[i].size()){
                if(res[x] == strs[i][x]){
                    temp += res[x];
                }
                else{
                    break;
                }
                x++;
            }
            if(temp == ""){
                return "";
            }
            res = temp;
        }
        return res;
    }
};