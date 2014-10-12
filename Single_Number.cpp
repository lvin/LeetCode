class Solution {
public:
    int singleNumber(int A[], int n) {
        int key = A[0];
        for (int i = 1; i < n; ++i) {
            key ^= A[i];
        }
        return key;
    }
};

