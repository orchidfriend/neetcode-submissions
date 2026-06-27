class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        int size = nums.size();
        for(int a=0;a<size;a++) {
            umap[nums[a]]++;
        }
        vector<pair<int,int>> s_v;
        for (const auto& key:umap) {
            s_v.push_back({key.second,key.first});
        }
        sort(s_v.rbegin(),s_v.rend());
        vector<int> result;
        for (int a=0;a<k;a++) {
            result.push_back(s_v[a].second);
        }
        return result;
    }
};
