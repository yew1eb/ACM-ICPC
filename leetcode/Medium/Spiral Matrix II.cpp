class Solution {
public:
    vector<vector<int> > generateMatrix(int n) {
        vector<vector<int> > matrix(n, vector<int>(n));
        int bx = 0, ex = n - 1;
        int by = 0, ey = n - 1;
        int tot = 1;
        while(tot <= n*n) {
            for(int i=by; i<=ey; ++i) {
                matrix[bx][i] = tot++;
            }
            bx++; if(bx>ex) break;
            for(int i=bx; i<=ex; ++i) {
                matrix[i][ey] = tot++;
            }
            ey--; if(by>ey) break;
            for(int i=ey; i>=by; --i) {
                matrix[ex][i] = tot++;
            }
            ex--; if(bx>ex) break;
            for(int i=ex; i>=bx; --i) {
                matrix[i][by] = tot++;
            }
            by++; if(by>ey) break;
        }
        return matrix;
    }
};