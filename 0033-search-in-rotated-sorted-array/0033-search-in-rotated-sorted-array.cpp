class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1, a = nums[0], b = nums[nums.size() - 1];
        if(target >= a){
            while(l <= r){
                int m = (l + r) / 2;
                if(nums[m] == target){
                    return m;
                }
                else if(nums[m] >= a){
                    if(nums[m] < target){
                        l = m + 1;
                    }
                    else{
                        r = m - 1;
                    }
                }
                else{
                    r = m - 1;
                }
            }
        }
        else{
            while(l <= r){
                int m = (l + r) / 2;
                if(nums[m] == target){
                    return m;
                }
                else if(nums[m] >= a){
                    l = m + 1;
                }
                else{
                    if(nums[m] < target){
                        l = m + 1;
                    }
                    else{
                        r = m - 1;
                    }
                }
            }
        }
        return -1;
    }
};