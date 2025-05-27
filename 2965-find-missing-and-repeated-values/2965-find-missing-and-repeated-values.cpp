class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int sum = 0;
        vector<int> res;
        unordered_set<int> s;
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[i].size(); j++){
                if(!s.contains(grid[i][j])){
                    sum += grid[i][j];
                    s.insert(grid[i][j]);
                }
                else{
                    res.push_back(grid[i][j]);
                }
            }
        }
        int n = grid.size() * grid.size();
        n = n * (n + 1) / 2;
        res.push_back(n - sum);
        return res;
    }
};