class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> m;
        for(int i = 0; i < numbers.size(); i++){
            if(m.find(target - numbers[i]) != m.end()){
                return {1 + m[target - numbers[i]], 1 + i};
            }
            else{
                m[numbers[i]] = i;
            }
        }
        return {};
    }
};