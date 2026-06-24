class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        vector<int> result;

        for(int a=0;a<nums.size();a++){
            int complement = target - nums[a];
            if (umap.find(complement)!=umap.end()) {
                result.push_back(umap[complement]);
                result.push_back(a);

                return result;
            }
            umap[nums[a]] = a;
        }
        
        return result;
    }
};
