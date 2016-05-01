class Solution {
public:
    bool isAlphaNum(char c) {
        return (c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9');
    }
    bool isSame(char a, char b) {
        return (a==b) || (a==b+('a'-'A')) || (a==b-('a'-'A'));
    }
    bool isPalindrome(string s) {
        if(s == "") return true;
        int i=0, j = s.size();
        while(i<j){
            while(i<j && !isAlphaNum(s[i])) i++;
            while(i<j && !isAlphaNum(s[j])) j--;
            if(i<j && !isSame(s[i], s[j])) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};