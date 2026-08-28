class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> position;
        for (int a = 0; a < nums.size(); a++) {
            int val = target - nums[a];
            if (position.find(val) != position.end()) {
                return {position[val], a};
            }
            position[nums[a]] = a;
        }
        return {};
    };
};
