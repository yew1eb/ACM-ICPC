class Solution {
public:
    int lengthOfLastWord(const char *s) {
        int len = 0;
        while(*s){
            if(*s++ != ' '){
                len++;
            }else if(*s && *s!= ' '){ //*s+1
                len = 0;
            }
        }
        return len;
    }
};