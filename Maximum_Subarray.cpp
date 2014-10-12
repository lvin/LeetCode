class Solution {
public:
    int maxSubArray(int A[], int n) {
        if (0 == n) {
            return 0;
        }
        if(n == 1) {
            return A[0];
        }
        
        int maxsum = A[0];
        int thesum = 0;
        
        for(int i = 0; i < n; ++i) {
            thesum += A[i];
            if (thesum > maxsum) {
                maxsum = thesum;
            } 
            if (thesum < 0) {
                thesum = 0;
            }
        }
        
        return maxsum;
        
    }
};


