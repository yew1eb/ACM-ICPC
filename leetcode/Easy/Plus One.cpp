class Solution {
public:
    vector<int> plusOne(vector<int> &digits) {
        int c = 1;
        for(auto iter = digits.rbegin(); iter!=digits.rend(); ++iter){
            *iter += c;
            c = *iter / 10;
            *iter %= 10;
        }
        if(c>0) digits.insert(digits.begin(), 1);
        return digits;
    }
};