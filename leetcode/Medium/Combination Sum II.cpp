class Solution {
public:
    vector<vector<int> > combinationSum2(vector<int> &num, int target) {
        sort(num.begin(), num.end());
        vector<vector<int> > res;
        vector<int> vt;
        dfs(num, target, 0, vt, res);
        return res;
    }
    
private:
    void dfs(vector<int> &num, int target, int start, vector<int> &vt, vector<vector<int> > &res) {
        if(target==0){
            res.push_back(vt);
            return ;
        }
        int per = -1;
        for(int i=start; i<num.size(); ++i) {
            if(per == num[i]) continue;
            if(target < num[i]) break;
            per = num[i];
            vt.push_back(num[i]);
            dfs(num, target - num[i], i+1, vt, res);
            vt.pop_back();
        }
    }
};