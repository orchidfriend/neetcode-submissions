class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int a = 0; a < nums.size(); a++) {
            if (a > 0 && nums[a] == nums[a - 1]) continue;
            int i = a + 1;
            int j = nums.size() - 1;
            while (i < j) {
                int temp = nums[a] + nums[i] + nums[j];
                if (temp == 0) {
                    result.push_back({nums[a], nums[i], nums[j]});
                    i++;
                    while (i < j && nums[i] == nums[i - 1]) i++;
                } else if (temp > 0) {
                    j--;
                    while (i < j && nums[j] == nums[j + 1]) j--;
                } else {
                    i++;
                    while (i < j && nums[i] == nums[i - 1]) i++;
                }
            }
        }
        return result;
    }
};
