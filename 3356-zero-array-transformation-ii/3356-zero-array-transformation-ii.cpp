class Solution {
public:
    int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
        vector<int> diffArr(nums.size() + 1);
        int t = 0;
        diffArr[0] = nums[0];
        for(int i = 1; i < nums.size(); i++){
            diffArr[i] = nums[i] - nums[i - 1];
        }
        for(int x: diffArr){
            if(x > 0){
                t = 1;
                break;
            }
        }
        if(t == 0){
            return 0;
        }
        diffArr[nums.size()] = 0;
        for(int i = 0; i < queries.size(); i++){
            diffArr[queries[i][0]] -= queries[i][2];
            diffArr[queries[i][1] + 1] += queries[i][2];
            int k = 0;
            for(int t = 0; t < nums.size(); t++){
                k += diffArr[t];
                if(k > 0){
                    break;
                }
            }
            if(k <= 0){
                return i + 1;
            }
        }
        return -1;
    }
};