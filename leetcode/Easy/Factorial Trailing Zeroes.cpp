class Solution {
public:
    int trailingZeroes(int n) {
        int cnt = 0;
        int base = 1;
        while( n/5 >= base ){
            base *= 5;
            cnt += n/base;
        }
        return cnt;
    }
};