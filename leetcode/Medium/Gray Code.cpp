class Solution {
public:
    vector<int> grayCode(int n) {
        //注意n = 0时，输出{0}而不是空数组
        int num = 1<<n;
        vector<int> res;
        res.reserve(num);
        for(int i = 0; i < num; i++)
            res.push_back(i^(i>>1));
        return res;
    }
};