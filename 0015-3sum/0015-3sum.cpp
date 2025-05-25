class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i = 0; i < nums.size() - 2; i++){
            if(i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            int l = i + 1, r = nums.size() - 1;
            while(l < r){
                if(nums[l] + nums[r] == 0 - nums[i]){
                    res.push_back({nums[l], nums[r], nums[i]});
                    l++;
                    r--;
                    
                    // Skip duplicates for l and r
                    while(l < r && nums[l] == nums[l - 1]) l++;
                    while(l < r && nums[r] == nums[r + 1]) r--;
                }
                else if(nums[l] + nums[r] < 0 - nums[i]){
                    l++;
                }
                else if(nums[l] + nums[r] > 0 - nums[i]){
                    r--;
                }
            }
        }
        return res;
    }
};