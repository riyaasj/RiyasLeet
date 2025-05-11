class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int drop = 0, i;
        for(i = nums.size() - 1; i > 0; i--){
            if(nums[i] > nums[i - 1]){
                drop = 1;
                break;
            }
        }
        if(drop == 0){
            reverse(nums.begin(), nums.end());
            return;
        }
        int k = i - 1;
        int x = i;
        for(i; i < nums.size() - 1; i++){
            if(nums[i] > nums[k] && nums[i] < nums[x]){
                x = i;
            }
        }
        swap(nums[k], nums[x]);
        sort(nums.begin() + k + 1, nums.end());
    }
};