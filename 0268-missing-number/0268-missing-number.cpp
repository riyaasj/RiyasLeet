class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int k = 0;
        for(int i: nums){
            k += i;
        }
        return nums.size() * (nums.size() + 1) / 2 - k;
    }
};