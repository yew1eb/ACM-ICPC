class Solution {
public:
    int totalNQueens(int n) {
        return dfs( (1<<n)-1, 0, 0, 0);
    }
    
    int dfs(int validate, int row, int diagLeft, int diagRight) {
        int solution = 0;
        if(row == validate) solution = 1;
        else {
            int cand = ~(row | diagLeft | diagRight) & validate;
            while(cand > 0) {
                int pos = cand & -cand;
                cand -= pos;
                solution += dfs(validate, row | pos, (diagLeft | pos)<<1, (diagRight | pos) >> 1);
            }
        }
        return solution;
    }
};