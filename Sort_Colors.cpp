class Solution {
public:
    void Swap(int &a, int &b) {
        int temp = a;
        a = b;
        b = temp;
    }
    void sortColors(int A[], int n) {
        if (n <= 1) {
            return;
        }
        
        int begin = 0;
        int end = n - 1;
        int curr = 0;
        
        while (curr <= end) {
            if (A[curr] == 0) {
                Swap(A[curr], A[begin]);
                ++begin;
                ++curr;
            } else if (A[curr] == 2) {
                Swap(A[curr], A[end]);
                end--;
            } else {
                ++curr;
            }
        }
        
    }
};

