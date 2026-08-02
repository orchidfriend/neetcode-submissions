class Solution {
   public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> lMax(nums.size());
        vector<int> rMax(nums.size());
        vector<int> result;
        for (int a = 0; a < nums.size(); a++) {
            if (a % k == 0) {
                rMax[a] = nums[a];
            } else {
                rMax[a] = max(rMax[a - 1], nums[a]);
            }
        }
        lMax[nums.size() - 1] = nums[nums.size() - 1];
        for (int a = nums.size() - 2; a >= 0; a--) {
            if (a % k == k - 1) {
                lMax[a] = nums[a];
            } else {
                lMax[a] = max(lMax[a + 1], nums[a]);
            }
        }
        for (int a = k - 1; a < nums.size(); a++) {
            result.push_back(max(lMax[a-k+1], rMax[a]));
        }
        return result;
    }
};
