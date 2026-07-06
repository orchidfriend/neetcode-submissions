class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        for(int a=0;a<nums.size();a++) {
            umap[nums[a]]++;
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> mheap;
        for(const auto& key:umap) {
            mheap.push({key.second,key.first});
            if (mheap.size()>k)
                mheap.pop();
        }
        vector<int> res;
        for(int a=0;a<k;a++){
            res.push_back(mheap.top().second);
            mheap.pop();
        }
        return res;
    }
};
