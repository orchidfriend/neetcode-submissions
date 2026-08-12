class Solution {
   public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> rMax(nums.size());
        vector<int> lMax(nums.size());
        vector<int> res;
        for (int a = 0; a < nums.size(); a++) {
            if (a % k == 0) {
                rMax[a] = nums[a];
            } else {
                rMax[a] = max(nums[a], rMax[a - 1]);
            }
        }
        lMax[nums.size() - 1] = nums[nums.size() - 1];
        for (int a = nums.size() - 2; a >= 0; a--) {
            if (a % k == k - 1) {
                lMax[a] = nums[a];
            } else {
                lMax[a] = max(nums[a], lMax[a + 1]);
            }
        }
        for (int a = k - 1; a < nums.size(); a++) {
            res.push_back(max(rMax[a], lMax[a - k + 1]));
        }
        return res;
    }
};
