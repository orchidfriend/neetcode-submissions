class Solution {
public:
    int maxProfit(vector<int>& prices) {
        stack<int> st;
        int maxP=0;
        int minPrice=prices[0];
        for(int a=1;a<prices.size();a++) {
            if(minPrice<prices[a]){
                maxP = max(maxP,prices[a]-minPrice);
            } else {
                minPrice = prices[a];
            }
        }
        return maxP;
    }
};
