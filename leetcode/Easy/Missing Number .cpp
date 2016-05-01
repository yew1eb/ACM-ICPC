class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int res = 0;
        int n = 1;
        bool haveZero = false;
        for(int i=0; i<nums.size(); ++i) {
            res += nums[i];
            if(n < nums[i]) n = nums[i];
            if(nums[i] == 0) haveZero = true;
        }
        int value = abs(res - n*(n+1)/2);
        if(value == 0) {
            return haveZero ? n+1 : 0;
        }else {
            return value;
        }
    }
};