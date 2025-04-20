class Solution {
public:
    // Returns the first index with value >= target
    int lower_bound(vector<int>& nums, int target, int l) {
        int r = nums.size() - 1;
        int res = nums.size(); // default to end of array
        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[mid] >= target) {
                res = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return res;
    }

    // Returns the first index with value > target
    int upper_bound(vector<int>& nums, int target, int l) {
        int r = nums.size() - 1;
        int res = nums.size(); // default to end of array
        while (l <= r) {
            int mid = (l + r) / 2;
            if (nums[mid] > target) {
                res = mid;
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return res;
    }

    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        long long c = 0;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int l = lower_bound(nums, lower - nums[i], i + 1);
            int u = upper_bound(nums, upper - nums[i], i + 1);
            c += u - l;
        }
        return c;
    }
};
