class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> maps;

        for(int a=0;a<nums.size();a++) {
            if (!maps.insert(nums[a]).second) {
                return true;
            }
        }
        return false;
    }
};