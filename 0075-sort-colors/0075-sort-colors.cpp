class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int, int> colours;
        for(int i: nums){
            colours[i]++;
        }
        int i = 0;
        while(i < nums.size()){
            for(int j = 0; j < colours[0]; j++){
                nums[i++] = 0;
            }
            for(int j = 0; j < colours[1]; j++){
                nums[i++] = 1;
            }
            for(int j = 0; j < colours[2]; j++){
                nums[i++] = 2;
            }
        }
    }
};