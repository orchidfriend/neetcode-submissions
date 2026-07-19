class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int minPrice = 101;
        int maxP = 0;
        for (int a = 0; a < prices.size(); a++) {
            if (prices[a] > minPrice) {
                maxP = max(maxP, prices[a] - minPrice);
            } else {
                minPrice = prices[a];
            }
        }
        return maxP;
    }
};
