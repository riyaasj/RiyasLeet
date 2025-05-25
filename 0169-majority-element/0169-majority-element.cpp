class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res = nums[0], count = 0;
        for(int x: nums){
            if(res == x){
                count++;
            }
            else{
                if(count == 0){
                    res = x;
                    count = 1;
                }
                else{
                    count--;
                }
            }
        }
        return res;
    }
};