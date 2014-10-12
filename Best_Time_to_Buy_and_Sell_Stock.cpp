class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if (prices.size()  <= 1) {
            return 0;
        }
        
        int maxsum = 0;
        int thesum = 0;
        
        for(int i = 1; i < prices.size(); ++i) {
            thesum += (prices[i] - prices[i-1]);
            if (thesum > maxsum) {
                maxsum = thesum;
            } else if (thesum < 0) {
                thesum = 0;
            }
        }
        
        return maxsum;
    }
};

