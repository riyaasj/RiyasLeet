class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++){
            nums[i] = (nums[nums[i]] % nums.size()) * nums.size() + nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            nums[i] = nums[i] / nums.size();
        }
        return nums;
    }
};