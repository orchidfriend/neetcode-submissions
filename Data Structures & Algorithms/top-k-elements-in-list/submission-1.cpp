class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        vector<pair<int,int>> s_num;
        vector<int> result;

        for(int a=0;a<nums.size();a++){
            umap[nums[a]]++;
        }
        for(const auto& key:umap) {
            s_num.push_back({key.second,key.first});
        }
        sort(s_num.rbegin(),s_num.rend());
        for(int b=0;b<k;b++){
            result.push_back(s_num[b].second);
        }
        return result;
    }
};
