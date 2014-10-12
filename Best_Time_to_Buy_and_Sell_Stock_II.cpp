class Solution {
public:
    int maxProfit(vector<int> &prices) {
        if (prices.size() <= 1) {
            return 0;
    }
    
    int total_profit = 0;
    for (int i = 1; i < prices.size(); ++i) {
        int temp = prices[i] - prices[i-1];
        if (temp > 0) {
            total_profit +=temp;
        }
    }
    return total_profit;
    }
};

