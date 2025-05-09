class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map <int, int> x;
        int m = 0, num = nums[0];
        for(int i: nums){
            x[i]++;
        }
        for(auto i: x){
            if(i.second > m){
                m = i.second;
                num = i.first;
            }
        }
        return num;
    }
};