class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size(), sum = 0, count = 0;
        map<int, int> prefixSum;
        prefixSum.insert({0, 1});
        for(int i: nums){
            sum += i;
            count += prefixSum[sum - k];
            prefixSum[sum]++;
        }
        return count;
    }
};