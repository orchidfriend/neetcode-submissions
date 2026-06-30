class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> umap;
        vector<vector<string>> result;

        for (int a = 0; a < strs.size(); a++) {
            string temps = strs[a];
            sort(temps.begin(), temps.end());
            umap[temps].push_back(strs[a]);
        }
        for (const auto& key : umap) {
            result.push_back(key.second);
        }
        return result;
    }
};
