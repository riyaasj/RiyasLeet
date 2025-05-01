class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0, j = 1;
        while(i < nums.size() - 1 && j < nums.size()){
            if(nums[i] == nums[j]){
                j++;
            }
            else{
                nums[++i] = nums[j++];
            }
        }
        return i + 1;
    }
};