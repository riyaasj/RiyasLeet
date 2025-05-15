class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> res;
        int n = words.size(), k = groups[0];
        res.push_back(words[0]);
        for(int i = 0; i < n; i++){
            if(groups[i] != k){
                k = 1 - k;
                res.push_back(words[i]);
            }
        }
        return res;
    }
};