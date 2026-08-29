class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int minIdx = 0;
        int maxProfit = 0;
        for (int a = 1; a < prices.size(); a++) {
            if (prices[minIdx] < prices[a]) {
                maxProfit = max(maxProfit, prices[a] - prices[minIdx]);
            } else {
                minIdx = a;
            }
        }
        return maxProfit;
    }
};
