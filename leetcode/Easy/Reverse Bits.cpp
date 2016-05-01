class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int idx = 0;
        uint32_t res = 0;
        while(idx++ < 32) {
            res <<= 1;            
            res += (n&1);
            n >>= 1;
        }
        return res;
    }

};