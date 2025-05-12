class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        int i, j = -1;
        for(i = 0; i < nums.size(); i++){
            if(nums[i] >= 0 && j == -1){
                j = i;
            }
            nums[i] = nums[i] * nums[i];
        }
        if(j == -1){
            i = 0;
            j = nums.size() - 1;
            while(i < j){
                swap(nums[i++], nums[j--]);
            }
            return nums;
        }
        i = j - 1;
        while(i >= 0 && j < nums.size()){
            if(nums[i] < nums[j]){
                res.push_back(nums[i]);
                i--;
            }
            else{
                res.push_back(nums[j]);
                j++;
            }
        }
        while(i >= 0){
            res.push_back(nums[i]);
            i--;
        }
        while(j < nums.size()){
            res.push_back(nums[j]);
            j++;
        }
        return res;
    }
};