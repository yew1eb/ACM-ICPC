class Solution {
public:
    vector<string> anagrams(vector<string> &strs) {
        map<string, int> mp;
        string tmp;
        vector<string> res;
        for(int i=0; i<strs.size(); ++i) {
            tmp = strs[i];
            sort(tmp.begin(), tmp.end());
            if(mp.find(tmp) == mp.end()) {
                mp[tmp] = i;
            } else {
                if(mp[tmp] >= 0) {
                    res.push_back(strs[mp[tmp]]);
                    mp[tmp] = -1;
                }
                res.push_back(strs[i]);
            }
        }
        return res;
    }
};