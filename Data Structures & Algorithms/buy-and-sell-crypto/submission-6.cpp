class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int lowPrice = prices[0];
        int maxP = 0;
        for (int a = 1; a < prices.size(); a++) {
            if (lowPrice < prices[a]) {
                maxP = max(maxP, prices[a] - lowPrice);
            } else {
                lowPrice = prices[a];
            }
        }
        return maxP;
    }
};
