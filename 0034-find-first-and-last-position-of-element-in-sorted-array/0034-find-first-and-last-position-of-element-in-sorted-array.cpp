class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1, f = -1;
        while(l <= r){
            int m = (l + r) / 2;
            if(nums[m] == target){
                f = m;
                r = m - 1;
            }
            else if(nums[m] > target){
                r = m - 1;
            }
            else{
                l = m + 1;
            }
        }
        if(f == -1){
            return {-1, -1};
        }
        vector<int> res = {f};
        l = 0, r = nums.size() - 1, f = -1;
        while(l <= r){
            int m = (l + r) / 2;
            if(nums[m] == target){
                f = m;
                l = m + 1;
            }
            else if(nums[m] > target){
                r = m - 1;
            }
            else{
                l = m + 1;
            }
        }
        res.push_back(f);
        return res;
    }
};