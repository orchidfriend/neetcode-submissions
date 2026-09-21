class Solution {
   public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> rightMax(nums.size());
        for (int a = 0; a < nums.size(); a++) {
            if (a % k == 0) {
                rightMax[a] = nums[a];
            } else {
                rightMax[a] = max(rightMax[a - 1], nums[a]);
            }
        }
        vector<int> leftMax(nums.size());
        leftMax[nums.size() - 1] = nums[nums.size() - 1];
        for (int a = nums.size() - 2; a >= 0; a--) {
            if (a % k == k - 1) {
                leftMax[a] = nums[a];
            } else {
                leftMax[a] = max(leftMax[a + 1], nums[a]);
            }
        }
        vector<int> result;
        for (int a = k - 1; a < nums.size(); a++) {
            result.push_back(max(rightMax[a], leftMax[a - k + 1]));
        }
        return result;
    }
};
