class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> umap;

        for (const auto& s_s:strs) {
            string temps = s_s;
            sort(temps.begin(),temps.end());
            umap[temps].push_back(s_s);
        }
        vector<vector<string>> result;
        for(const auto& key:umap) {
            result.push_back(key.second);
        }
        return result;
    }
};
