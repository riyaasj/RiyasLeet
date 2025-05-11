class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int num = nums[0], count = 1;
        for(int i: nums){
            if(i == num){
                count++;
            }
            else{
                if(count == 0){
                    num = i;
                    count = 1;
                }
                count--;
            }
        }
        return num;
    }
};