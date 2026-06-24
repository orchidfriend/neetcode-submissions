class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;
        vector<int> result;

        for(int a =0;a<nums.size();a++) {
            umap[nums[a]] = a;
        }
        for(int a=0;a<nums.size();a++) {
            if ((umap.find(target-nums[a]) != umap.end()) && (umap[target-nums[a]] != a)) {
                result.push_back(a);
                result.push_back(umap[target-nums[a]]);
                break;
            }
        }
        return result;
    }
};
