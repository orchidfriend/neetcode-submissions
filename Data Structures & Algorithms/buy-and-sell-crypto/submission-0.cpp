class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        int i = 0, j = i + 1;
        int priceH = 0, priceL = 100;
        int maxProfit = 0;

        if (prices.size() <= 1) return 0;
        for (int j = 1; j < prices.size(); j++) {
            if (prices[i] > prices[j]) {
                i = j;
            } else {
                maxProfit = max(maxProfit, prices[j] - prices[i]);
            }
        }
        return maxProfit;
    }
};
