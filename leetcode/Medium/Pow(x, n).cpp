class Solution {
public:
    double modPow(double x, int n) {
        double res = 1;
        while(n) {
            if(n&1) res *= x;
            x *= x;
            n /= 2;
        }
        return res;
    }
    double pow(double x, int n) {
        if(x == 0.00) return x;
        if(n<0) {
            return modPow(1/x, -n);
        } else {
            return modPow(x,n);
        }
    }
};