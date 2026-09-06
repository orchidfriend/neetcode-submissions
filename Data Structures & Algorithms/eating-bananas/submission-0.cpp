class Solution {
   public:
    int minEatingSpeed(vector<int>& piles, int h) {
        sort(piles.rbegin(), piles.rend());
        int low = 1, high = piles[0];
        int res = 0;
        while (low <= high) {
            int mid = (low + high) / 2;
            int sum = 0;

            for (int a = 0; a < piles.size(); a++) {
                sum += ceil((double)piles[a] / mid);
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
