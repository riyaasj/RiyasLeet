class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            nums[i] = (nums[nums[i]] % 10) * 10 + nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            nums[i] = nums[i] / 10;
        }
        return nums;
    }
};