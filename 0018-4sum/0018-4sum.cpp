class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        if(nums.size() < 4){
            return {};
        }
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        for(int i = 0; i < nums.size() - 3; i++){
            if(i > 0 && nums[i] == nums[i - 1]){
                continue;
            }
            for(int j = i + 1; j < nums.size() - 2; j++){
                if(j > i + 1 && nums[j] == nums[j - 1]){
                    continue;
                }
                int l = j + 1, r = nums.size() - 1;
                while(l < r){
                    if(nums[l] + nums[r] + nums[i] + nums[j] == target){
                        vector<int> re = {nums[i], nums[j], nums[l], nums[r]};
                        res.push_back(re);
                        l++;
                        r--;
                        while(l < r && nums[l] == nums[l - 1]){
                            l++;
                        }
                        while(l < r && nums[r] == nums[r + 1]){
                            r--;
                        }
                    }
                    else if(nums[l] + nums[r] + nums[i] + nums[j] < target){
                        l++;
                    }
                    else{
                        r--;
                    }
                }
            }
        }
        return res;
    }
};