class Solution {
public:
    vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
        sort(candidates.begin(), candidates.end());
        candidates.erase(unique(candidates.begin(), candidates.end()),candidates.end());
        vector<vector<int> > res;
        vector<int> vt;
        dfs(candidates, target, 0, vt, res);
        return res;
    }
private:
    void dfs(vector<int> &num, int target, int start, vector<int> &vt, vector<vector<int> > &res) {
        if(target==0) {
            res.push_back(vt);
            return ;
        }
        for(int i=start; i<num.size(); ++i) {
            if(target < num[i]) break;
            vt.push_back(num[i]);
            dfs(num, target -num[i], i, vt, res);
            vt.pop_back();
        }
    }
};