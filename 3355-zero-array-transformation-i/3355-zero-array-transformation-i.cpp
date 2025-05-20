class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        int n = nums.size();
        vector<int> k(n + 1);
        k[0] = nums[0];
        for(int i = 1; i < n; i++){
            k[i] = nums[i] - nums[i - 1];
        }
        k[n] = 0;
        for(auto x: queries){
            k[x[0]]--;
            k[x[1] + 1]++;
        }
        int c = 0;
        for(int i = 0; i < k.size() - 1; i++){
            c += k[i];
            if(c > 0){
                return false;
            }
        }
        return true;
    }
};