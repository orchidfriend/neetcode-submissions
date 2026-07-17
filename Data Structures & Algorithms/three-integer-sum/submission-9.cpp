class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        for (int a = 0; a < nums.size(); a++) {
            int i = a + 1, j = nums.size() - 1;
            while (i < j) {
                int temp = nums[a] + nums[i] + nums[j];
                if (temp < 0) {
                    i++;
                } else if (temp > 0) {
                    j--;
                } else {
                    res.push_back({nums[a], nums[i], nums[j]});
                    i++;
                    while (i < j && nums[i] == nums[i - 1]) i++;
                }
            }
            while (a + 1 < nums.size() && nums[a] == nums[a + 1]) a++;
        }
        return res;
    }
};
