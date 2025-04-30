class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> r = {{1}};
        for(int i = 1; i < numRows; i++){
            vector<int> n;
            n.push_back(1);
            vector<int> x = r[r.size() - 1];
            for(int j = 0; j < x.size() - 1; j++){
                n.push_back(x[j] + x[j + 1]);
            }
            n.push_back(1);
            r.push_back(n);
        }
        return r;
    }
};