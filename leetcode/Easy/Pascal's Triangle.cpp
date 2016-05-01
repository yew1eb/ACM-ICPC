class Solution {
public:
    vector<vector<int> > generate(int numRows) {
        vector<vector<int> > res;
        vector<int> a;
        for(int i=0; i<numRows; ++i) {
            for(int j=i-1; j>0; --j) {
                a[j] = a[j] + a[j-1];
            }
            a.push_back(1);
            res.push_back(a);
        }
        return res;
    }
};