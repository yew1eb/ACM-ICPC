class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        int idx = m+n - 1;
        int pa = m - 1, pb = n - 1;
        while(pa>=0 && pb>=0) {
            A[idx--] = A[pa] >= B[pb] ? A[pa--]:B[pb--];
        }
        while(pb>=0) {
            A[idx--] = B[pb--];
        }
    }
};