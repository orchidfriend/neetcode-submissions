class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int,int> maps;

        for(int a=0;a<nums.size();a++) {
            if (maps.find(nums[a])!= maps.end()) {
                return true;
            } else {
                maps[nums[a]] = a;
            }
        }
        return false;
    }
};