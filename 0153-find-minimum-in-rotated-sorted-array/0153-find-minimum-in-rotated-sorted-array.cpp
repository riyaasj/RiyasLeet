class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1, res = 0, index = -1;
        while(l <= r){
            int m = (l + r) / 2;
            if(nums[m] >= nums[0]){
                l = m + 1;
            }
            else{
                index = m;
                res = nums[m];
                r = m - 1;
            }
        }
        if(index == -1){
            return nums[0];
        }
        return res;
    }
};