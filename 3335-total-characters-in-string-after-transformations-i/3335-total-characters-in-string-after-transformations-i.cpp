class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        vector<int> m(26, 0);
        const int MOD = 1e9 + 7;
        int k = 0;
        for(char i : s){
            m[i - 'a']++;
        }
        for(int i = 0; i < t; i++){
            vector <int> temp(26, 0);
            for(int j = 0; j < 26; j++){
                if(j == 25){
                    temp[0] = (temp[0] + m[25]) % MOD;
                    temp[1] = (temp[1] + m[25]) % MOD;
                }
                else{
                    temp[j + 1] = (temp[j + 1] + m[j]) % MOD;
                }
            }
            m = temp;
        }
        for(int x: m){
            k = (x + k) % MOD;
        }
        return k;
    }
};