class Solution {
public:
    int differenceOfSums(int n, int m) {
        int k = n / m;
        k = k * (k + 1) * m;
        n = n * (n + 1) / 2;
        return n - k;
    }
};