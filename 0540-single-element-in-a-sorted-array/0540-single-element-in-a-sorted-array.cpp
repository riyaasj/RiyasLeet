class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        int l = 0, r = nums.size() - 1;
        while(l <= r){
            int m = (l + r) / 2;
            if(m % 2 == 0){
                if(m == 0 || m == nums.size() - 1){
                    return nums[m];
                }
                if(nums[m - 1] == nums[m]){
                    r = m - 1;
                }
                else if(nums[m + 1] == nums[m]){
                    l = m + 1;
                }
                else{
                    return nums[m];
                }
            }
            else{
                if(nums[m - 1] == nums[m]){
                    l = m + 1;
                }
                else{
                    r = m - 1;
                }
            }
        }
        return -1;
    }
};