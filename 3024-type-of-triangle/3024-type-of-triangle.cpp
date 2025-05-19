class Solution {
public:
    string triangleType(vector<int>& nums) {
        unordered_set<int> s;
        int f = 0;
        for(int i = 0; i < 3; i++){
            s.insert(nums[i]);
            for(int j = i + 1; j < 3; j++){
                if(nums[i] + nums[j] <= nums[3 - i - j]){
                    f = 1;
                    break;
                }
            }
            if(f == 1){
                return "none";
            }
        }
        if(s.size() == 1){
            return "equilateral";
        }
        if(s.size() == 2){
            return "isosceles";
        }
        return "scalene";
    }
};