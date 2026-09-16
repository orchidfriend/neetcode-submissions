class Solution {
   public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxP = 0;
        for (const auto& pile : piles) {
            if (maxP < pile) maxP = pile;
        }
        int low = 1, high = maxP;
        int res = 0;
        while (low <= high) {
            int mid = (low + high) / 2;
            int sum = 0;
            for (const auto& pile : piles) {
                sum += ceil((double)pile / mid);
            }
            if (sum <= h) {
                res = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return res;
    }
};
