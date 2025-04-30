class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        if(numRows == 1){
            return {{1}};
        }
        else if(numRows == 2){
            return {{1}, {1, 1}};
        }
        vector<vector<int>> r = {{1}, {1, 1}};
        for(int i = 2; i < numRows; i++){
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