class Solution {
public:
    int reverse(int x) {
        long res = 0;
        while(x){
            int tmp = x % 10;
            x /= 10;
            res = res * 10 + tmp;
            if(res > INT_MAX) return 0;
            if(res < INT_MIN) return 0;
        }
        return res;
    }
};