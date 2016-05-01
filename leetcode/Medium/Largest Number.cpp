bool cmp(const string &s1, const string &s2) {
    return (s1+s2) > (s2+s1);
}

class Solution {
public:
    string largestNumber(vector<int> &num) {
        vector<string> strs(num.size() );
        stringstream stream;
        for(int i=0; i<num.size(); ++i) {
            stream << num[i];
            stream >> strs[i];
            stream.clear();
        }
        sort(strs.begin(), strs.end(), cmp);
        string result;
        for(int i=0; i<strs.size(); ++i) result += strs[i];
        
        bool flag = false;
        int start = 0;
        while(start<result.size()-1 && result[start]=='0') start++;
        return result.substr(start);
    }
};