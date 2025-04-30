class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> x;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                if(matrix[i][j] == 0){
                    x.push_back(i);
                    x.push_back(j);
                }
            }
        }
        
        for(int i = 0; i < x.size(); i += 2){
            for(int j = 0; j < matrix[x[i]].size(); j++){
                matrix[x[i]][j] = 0;
            }
        }
        
        for(int i = 1; i < x.size(); i += 2){
            for(int j = 0; j < matrix.size(); j++){
                matrix[j][x[i]] = 0;
            }
        }
        
    }
};