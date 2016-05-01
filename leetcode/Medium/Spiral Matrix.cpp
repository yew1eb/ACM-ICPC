class Solution {
public:
    vector<int> spiralOrder(vector<vector<int> > &matrix) {
        if(matrix.empty()) return vector<int>();
        vector<int> res;
        int n = matrix.size();
        int m = matrix[0].size();
        int bx = 0, ex = n - 1;
        int by = 0, ey = m - 1;
        while(true) {
            for(int i=by; i<=ey; ++i) {
                res.push_back(matrix[bx][i]);
            }
            bx++; if(bx>ex) break;
            for(int i=bx; i<=ex; ++i) {
                res.push_back(matrix[i][ey]);
            }
            ey--; if(by>ey) break;
            for(int i=ey; i>=by; --i) {
                res.push_back(matrix[ex][i]);
            }
            ex--; if(bx>ex) break;
            for(int i=ex; i>=bx; --i) {
                res.push_back(matrix[i][by]);
            }
            by++; if(by>ey) break;
        }
        return res;
    }
};