class Solution {
public:
    string convert(string s, int nRows) {
        if(s.size()<=1) return s;
        string lines[nRows];
        for(int i=0; i<s.size(); ) {
            for(int j=0; i<s.size() && j<nRows; ++j) lines[j] += s[i++];
            for(int j=nRows-2; i<s.size() && j>0; --j) lines[j] += s[i++];
        }
        string res;
        for(int i=0; i<nRows; ++i) {
            res += lines[i];
        }
        return res;
    }
};