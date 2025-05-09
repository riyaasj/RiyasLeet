class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> x;
        for(int i = 0; i < n; i++){
            if(x.find(target - nums[i]) != x.end()){
                return {i, x[target - nums[i]]};
            }
            x[nums[i]] = i;
        }
        return {};
    }
};