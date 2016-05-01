class Solution {
public:
int reverse(int x) {  
        // Start typing your C/C++ solution below  
        // DO NOT write int main() function  
        int sign = 1;
        long long tmp = x;
        if(tmp<0) {
            tmp = -tmp;
            sign = -1;
        }
        long long res = 0;  
        while(tmp)  
        {  
            res = res*10 + tmp%10;  
            tmp /= 10;  
        }  
        res *= sign;
        if(res > INT_MAX || res < INT_MIN) res = 0;
        return res; 
    }
};