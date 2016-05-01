class Solution {
public:
    string convertToTitle(int n) {
        string s;
        while(n) {
            char ch = (n-1)%26 + 'A';
            s += ch;
            n = (n-1)/26;
        }
       reverse(s.begin(), s.end());
       return s;
    }
};