class Solution {
public:
    string multiply(string num1, string num2) {
        int len1 = num1.size(), len2 = num2.size(), len3 = len1 + len2;
        int b[len3+2] = {0};
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        for(int i=0; i<len1; ++i) {
            for(int j=0; j<len2; ++j) {
                b[i+j] += (num1[i] - '0') * (num2[j] - '0');
                b[i+j+1] += b[i+j] / 10;
                b[i+j] %= 10;
            }
        }
        while(len3>=0 && b[len3]==0) --len3;
        if(len3<0) return "0";
        string res;
        for(int i=len3; i>=0; --i) res += b[i]+'0';
        return res;
    }
};