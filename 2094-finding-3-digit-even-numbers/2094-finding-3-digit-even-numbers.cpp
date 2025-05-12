class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int> nums;
        for(int i = 0; i < digits.size(); i++){
            for(int j = 0; j < digits.size(); j++){
                for(int k = 0; k < digits.size(); k++){
                    if(i != j && j != k && k != i){
                        int n = 100 * digits[i] + 10 * digits[j] + digits[k];
                        if(n >= 100 && n % 2 == 0){
                            nums.insert(n);
                        }
                    }
                }
            }
        }
        std::vector<int> r(nums.begin(), nums.end());
        return r;
    }
};