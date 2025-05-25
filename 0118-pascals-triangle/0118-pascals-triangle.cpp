class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res = {{1}};
        for(int i = 2; i <= numRows; i++){
            vector<int> n(i), x = res.back();
            n[0] = 1;
            for(int j = 1; j <= i - 2; j++){
                n[j] = x[j] + x[j - 1];
            }
            n[i - 1] = 1;
            res.push_back(n);
        }
        return res;
    }
};