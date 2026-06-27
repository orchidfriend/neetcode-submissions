class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        for(int a=0;a<nums.size();a++) {
            umap[nums[a]]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>,std::greater<pair<int,int>>> minheap;

        for(const auto& key:umap) {
            minheap.push({key.second,key.first});
            if (minheap.size()>k)
                minheap.pop();
        }
        vector<int> result;
        for(int a=0;a<k;a++){
            result.push_back(minheap.top().second);
            minheap.pop();
        }
        return result;
    }
};
