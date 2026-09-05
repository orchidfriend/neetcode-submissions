class Solution {
   public:
    int maxProfit(vector<int>& prices) {
        stack<int> st;
        int maxProfit = 0;
        int minVal = prices[0];
        for (const auto& price : prices) {
            if (minVal > price) {
                minVal = price;
            } else {
                maxProfit = max(maxProfit, price - minVal);
            }
        }
        return maxProfit;
    }
};
