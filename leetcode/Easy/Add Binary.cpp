class Solution {
public:
    string addBinary(string a, string b) {
        string result;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());
        int n =a.size() > b.size() ? a.size() : b.size();
        int val, carry = 0;
        for(int i=0; i<n || carry>0; ++i){
            val = 0;
            if(i<a.size()) val += a[i] - '0';
            if(i<b.size()) val += b[i] - '0';
            val += carry;
            carry = val / 2;
            result += val % 2 + '0';
        }
        reverse(result.begin(), result.end());
        return result;
    }
};