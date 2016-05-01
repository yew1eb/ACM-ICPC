class Solution {
public:
    bool isUgly(int num) {
        if(num < 1) return false;
        while(num>1 && num % 2 == 0) num /= 2;
        while(num>1 && num % 3 == 0) num /= 3;
        while(num>1 && num % 5 == 0) num /= 5;
        return (num==1);
    }
};