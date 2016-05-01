class Solution {
public
    stackchar st;
    bool match(char x) {
        char y = st.top();
        return (y=='('&&x==')')  (y=='['&&x==']')  (y=='{'&&x=='}');
    }
    bool isValid(string s) {
        while(!st.empty()) st.pop();
        for(int i=0; is.size(); ++i) {
            if(s[i]==')'  s[i]=='}'  s[i]==']'){
                if(st.empty()  !match(s[i]) ) return false;
                st.pop();
            } else {
                st.push(s[i]);
            }
        }
        return st.empty();
    }
};