class Solution {
public:
    int findParent(vector<int> &parent, int x){
        if(parent[x] == x){
            return x;
        }
        return parent[x] = findParent(parent, parent[x]);
    }
    void unionSets(vector<int> &parent, int i, int j){
        int pi = findParent(parent, i), pj = findParent(parent, j);
        if(pi != pj){
            parent[pj] = pi;
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int> parent(isConnected.size());
        for(int i = 0; i < isConnected.size(); i++){
            parent[i] = i;
        }
        for(int i = 0; i < isConnected.size(); i++){
            for(int j = i + 1; j < isConnected.size(); j++){
                if(isConnected[i][j]){
                    unionSets(parent, i, j);

                }
            }
        }
        for(int i = 0; i < isConnected.size(); i++) {
            parent[i] = findParent(parent, i);
        }
        unordered_set<int> s;
        for(int i = 0; i < isConnected.size(); i++) {
            s.insert(parent[i]);
        }
        return s.size();
    }
};