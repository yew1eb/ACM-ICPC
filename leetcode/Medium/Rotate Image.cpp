//先对角线翻，再水平翻
class Solution {
public:
    void rotate(vector<vector<int> > &matrix) {
        if(matrix.empty()) return ;
        int tmp;
        int n = matrix[0].size();
        for(int i=0; i<n; ++i) {
            for(int j=0; j<n-i; ++j) {
                tmp = matrix[i][j];
                matrix[i][j] = matrix[n-1-j][n-1-i];
                matrix[n-1-j][n-1-i] = tmp;
            }
        }
        
        for(int i=0; i<n/2; ++i) {
            for(int j=0; j<n; ++j){
                tmp = matrix[i][j];
                matrix[i][j] = matrix[n-1-i][j];
                matrix[n-1-i][j] = tmp;
            }
        }
    }
};