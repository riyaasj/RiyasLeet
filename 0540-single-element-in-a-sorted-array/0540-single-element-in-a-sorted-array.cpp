class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        int l = 0, r = nums.size() - 1;
        while(l <= r){
            int m = l + (r - l) / 2;
            if(m == 0 || m == nums.size() - 1){
                return nums[m];
            }
            else if(nums[m] == nums[m - 1]){
                if((m - 2) % 2 == 0){
                    r = m - 2;
                }
                else{
                    l = m + 1;
                }
            }
            else if(nums[m] == nums[m + 1]){
                if((m - 1) % 2 == 0){
                    r = m - 1;
                }
                else{
                    l = m + 2;
                }
            }
            else{
                return nums[m];
            }
        }
        return -1;
    }
};