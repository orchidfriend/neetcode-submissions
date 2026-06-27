class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        vector<vector<int>> freq(nums.size()+1);

        for(int a=0;a<nums.size();a++) {
            umap[nums[a]]++;
        }
        for(const auto& item:umap) {
            freq[item.second].push_back(item.first);
        }
        vector<int> result;
        for(int a=nums.size();a>=0;a--) {
            for(int b=0;b<freq[a].size();b++) {
                result.push_back(freq[a][b]);
                if (result.size() == k){
                    return result;
                }
            }
        }
        return result;
    }
};
