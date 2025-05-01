class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        for(int i = 0; i < k % nums.size(); i++){
            int k = nums.back();
            nums.pop_back();
            nums.insert(nums.begin(), k);
        }
        
    }
};