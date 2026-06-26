class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        int size = nums.size();
        vector<int> result;

        for (int a=0;a<size;a++) {
            umap[nums[a]]++;
        }
        vector<pair<int,int>> freq;
        for (const auto& key:umap) {
            freq.push_back({key.second,key.first});
        }
        sort(freq.rbegin(),freq.rend());
        for(int a=0;a<k;a++){
            result.push_back(freq[a].second);
        }
        return result;
    }
};
