class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums == std::vector<int>{0}){
            return;
        }
        int i = 0, j = 0;
        for(j; j < nums.size(); j++){
            while(j < nums.size() && nums[j] == 0){
                j++;
            }
            nums[i++] = nums[j];
        }
        while(i < nums.size()){
            nums[i] = 0;
            i++;
        }
        
    }
};