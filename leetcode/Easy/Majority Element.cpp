class Solution {
public:
    int majorityElement(vector<int> &num) {
        int cnt = 1;
        int val = num[0];
        for(int i=1; i<num.size(); ++i) {
            if(val==num[i]) {
                cnt++;
            }else {
                if(--cnt==0) {
                    val = num[i];
                    cnt = 1;
                }
            }
        }
        return val;
    }
};