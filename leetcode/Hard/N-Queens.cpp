class Solution {
private:
    vector<vector<string>> allSol;
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<int> value(n);
        for(int i=0; i<n; ++i) value[i] = i;
        dfs(value, 0, n);
        return allSol;
    }
    
    
    void dfs(vector<int> value, int k, int n) {
        if(k == n) {
            vector<string> sol;
            string tmp(n, '.');
            for(int i=0; i<n; ++i) {
                tmp[value[i]] = 'Q';
                sol.push_back(tmp);
                tmp[value[i]] = '.';
            }
            allSol.push_back(sol);
            return ;
        }
        
        for(int i=k; i<n; ++i) {
            swap(value[k], value[i]);
            if(isValid(value, k)) {
                dfs(value, k+1, n);
            }
            swap(value[k], value[i]);
        }
    }
    
    bool isValid(vector<int> value, int x) {
        for(int i=0; i<x; ++i) {
            if( (x - i) == abs(value[x] - value[i]))
                return false;
        }
        return true;
    }
};