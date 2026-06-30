class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> umap;
        vector<vector<string>> result;

        for (const auto& s : strs) {
            vector<int> count(26, 0);
            for (const auto& c : s) {
                count[c - 'a']++;
            }
            string temps = to_string(count[0]);
            for (int a = 1; a < 26; a++) {
                temps += ',' + to_string(count[a]);
            }
            umap[temps].push_back(s);
        }
        for (const auto& key : umap) {
            result.push_back(key.second);
        }
        return result;
    }
};
