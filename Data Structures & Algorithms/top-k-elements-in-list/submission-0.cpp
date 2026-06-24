class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        vector<int> result;

        for(int a=0;a<nums.size();a++) {
            if(umap.find(nums[a])==umap.end()) {
                umap[nums[a]]=0;
            }
            umap[nums[a]]++;
        }
        vector<pair<int,int>> sort_map;
        for(const auto& key:umap) {
            sort_map.push_back({key.second,key.first});
        }
        sort(sort_map.rbegin(),sort_map.rend());
        int a=0;
        for(const auto& key:sort_map) {
            result.push_back(key.second);
            a++;
            if (a==k)
                return result;
        }
        return result;
    }
};
