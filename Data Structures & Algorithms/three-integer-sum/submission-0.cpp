class Solution {
   public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size = nums.size();
        vector<vector<int>> res;
        set<vector<int>> temp;

        sort(nums.begin(),nums.end());
        for (int a = 0; a < size; a++) {
            for (int b = a + 1; b < size; b++) {
                for (int c = b + 1; c < size; c++) {
                    if (nums[a] + nums[b] + nums[c] == 0) {
                        temp.insert({nums[a], nums[b], nums[c]});
                    }
                }
            }
        }
        for(const auto& key:temp) {
            res.push_back(key);
        }
        return res;
    }
};
