class Solution {
   public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxpile = 0;
        for (int a = 0; a < piles.size(); a++) {
            maxpile = max(maxpile, piles[a]);
        }
        int low = 1;
        int res = maxpile;
        while (low <= maxpile) {
            int mid = (low + maxpile) / 2;
            int time = 0;
            for (const auto& pile : piles) {
                time += ceil((double)pile / mid);
            }
            if (time <= h) {
                res = mid;
                maxpile = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return res;
    }
};
