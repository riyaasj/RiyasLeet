class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> sub1(nums.end() - k % nums.size(), nums.end());
        vector<int> sub2(nums.begin(), nums.end() - k % nums.size());
        sub1.insert(sub1.end(), sub2.begin(), sub2.end());
        nums = sub1;
    }
};
