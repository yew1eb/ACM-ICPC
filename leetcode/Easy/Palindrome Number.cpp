class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int base = 1;
        while(x/base >= 10) {
            base *= 10;
        }
        int lval, rval;
        while(x){
            lval = x/base;
            rval = x%10;
            if(lval != rval) {
                return false;
            }
            x -= lval*base;
            x /= 10;
            base /= 100;
        }
        return true;
    }
};