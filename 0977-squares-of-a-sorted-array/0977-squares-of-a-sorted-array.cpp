class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size(), 0);
        int f = 0, b = nums.size() - 1, p = nums.size() - 1;
        while(f <= b){
            int l = nums[f] * nums[f];
            int r = nums[b] * nums[b];
            if(l > r){
                res[p--] = l;
                f++;
            }
            else{
                res[p--] = r;
                b--;
            }
        }
        return res;
    }
};