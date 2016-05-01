class Solution {
public:
    int removeDuplicates(int A[], int n) {
        if(!n) return 0;
        int idx = 1;
        for(int i=1; i<n; ++i){
            if( A[i] != A[i-1]){
                A[idx++] = A[i];
            }
        }
        return idx;
    }
};