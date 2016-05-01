class Solution {
public:
    bool canJump(int A[], int n) {
        vector<bool> f(n, false);
        f[0] = true;
        int far = 0;
        for(int i=0; i<n; ++i) {
            if(f[i]){
                if(i+A[i]>far) {
                    for(int j=far+1; j<=i+A[i] && j<n; ++j) {
                        f[j] = true;
                    }
                }
                far = i + A[i];
            }
        }
        return f[n-1];
    }
};