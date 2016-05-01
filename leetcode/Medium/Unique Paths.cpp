class Solution {
public:
    int comb(int x, int y) {
        double ret = 1;
        for(int i=1; i<=y; ++i) {
            ret *= (x - i + 1);
            ret /= i;
        }
        return (int)ret;
    }
    int uniquePaths(int m, int n) {
        return comb(m + n - 2, min(m, n) - 1);
    }
};