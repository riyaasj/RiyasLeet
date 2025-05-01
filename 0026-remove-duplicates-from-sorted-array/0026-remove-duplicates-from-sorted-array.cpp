class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1, k = 0;
        for(i; i < nums.size(); i++){
            if(nums[k] != nums[i]){
                nums[++k] = nums[i];
            }
        }
        return k + 1;
    }
};