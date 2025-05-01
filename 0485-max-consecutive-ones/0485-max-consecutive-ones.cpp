class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int r = 0, x = 0, j = 0;
        for(j; j < nums.size(); j++){
            if(nums[j] == 0){
                r = max(r, x);
                x = 0;
            }
            else{
                x++;
            }
        }
        return max(r, x);
    }   
};