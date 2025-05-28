class Solution {
public:
    int fib(int n) {
        int a = 1, b = 0, t;
        for(int i = 0; i < n - 1; i++){
            t = a + b;
            b = a;
            a = t;
        }
        return a;
    }
};