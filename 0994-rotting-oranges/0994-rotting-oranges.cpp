class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        queue<pair<int, int>> q;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                }
            }
        }
        int c = 0;
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                pair<int, int> curr = q.front();
                q.pop();
                int i = curr.first, j = curr.second;
                if (i - 1 >= 0 && grid[i - 1][j] == 1) {
                    grid[i - 1][j] = 2;
                    q.push({i - 1, j});
                }
                if (j - 1 >= 0 && grid[i][j - 1] == 1) {
                    grid[i][j - 1] = 2;
                    q.push({i, j - 1});
                }
                if (i + 1 < grid.size() && grid[i + 1][j] == 1) {
                    grid[i + 1][j] = 2;
                    q.push({i + 1, j});
                }
                if (j + 1 < grid[0].size() && grid[i][j + 1] == 1) {  
                    grid[i][j + 1] = 2;
                    q.push({i, j + 1});
                }
            }
            c++;
        }
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1) {
                    return -1;
                }
            }
        }
        return c == 0 ? 0 : c - 1;
    }
};
