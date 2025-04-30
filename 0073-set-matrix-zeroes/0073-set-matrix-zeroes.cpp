class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<int> rows(m, 0);
        vector<int> columns(n, 0);
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    rows[i] = 1;
                    columns[j] = 1;
                }
            }
        }   
        for(int i = 0; i < m; i++){
            if(rows[i] == 1){
                for(int j = 0; j < n; j++){
                    matrix[i][j] = 0;
                }
            }
        }
        
        for(int i = 0; i < n; i++){
            if(columns[i] == 1){
                for(int j = 0; j < m; j++){
                    matrix[j][i] = 0;
                }
            }
        }
        
    }
};