class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int a = 0; a < nums.size(); a++) {
            if ((a > 0) && (nums[a] == nums[a - 1])) continue;
            int i = a + 1, j = nums.size() - 1;
            while (i < j) {
                int temp = nums[i] + nums[j];
                if (temp == -nums[a]) {
                    res.push_back({nums[a], nums[i], nums[j]});
                    i++;
                    j--;
                    while (nums[i] == nums[i - 1] && i < j) i++;
                } else if (temp < -nums[a]) {
                    i++;
                } else {
                    j--;
                }
            }
        }
        return res;
    }
};
