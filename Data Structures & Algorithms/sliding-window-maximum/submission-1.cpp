class Solution {
   public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> res;

        for (int a = 0; a + k - 1 < nums.size(); a++) {
            int maxval = -10001;
            for (int b = 0; b < k; b++) {
                maxval = max(maxval, nums[a+b]);
            }
            res.push_back(maxval);
        }
        return res;
    }
};
