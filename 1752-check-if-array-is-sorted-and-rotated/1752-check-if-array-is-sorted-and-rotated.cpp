class Solution {
public:
    bool check(vector<int>& nums) {
        int dropno = 0;
        for(int i = 0; i < nums.size() - 1; i++){
            if(nums[i] > nums[i + 1]){
                if(dropno == 1){
                    return false;
                }
                dropno = 1;
            }
            if(dropno == 1){
                if(nums[i + 1] > nums[0]){
                    return false;
                }
            }
        }
        return true;
    }
};