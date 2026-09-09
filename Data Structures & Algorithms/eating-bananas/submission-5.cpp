class Solution {
   public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max_pile = 0;
        for (const auto& pile : piles) {
            max_pile = max(max_pile, pile);
        }
        int i = 1, j = max_pile;
        int res;
        while (i <= j) {
            int temp = 0;
            int time = (i + j) / 2;
            for (const auto& pile : piles) {
                temp += ceil((double)pile / time);
            }
            if (temp > h) {
                i = time + 1;
            } else {
                res = time;
                j = time - 1;
            }
        }
        return res;
    }
};
