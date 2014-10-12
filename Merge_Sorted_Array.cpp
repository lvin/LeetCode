class Solution {
public:
    void merge(int A[], int m, int B[], int n) {
        if (n == 0) {
            return;
        }
        int pos = m;
        for (int i = 0; i < n; ++i) {
            int j = pos - 1;
            for (; j >= 0 && A[j] > B[i]; --j) {
                A[j+1] = A[j];
            }
            
            A[j+1] = B[i];
            ++pos;
        }
    }
};

