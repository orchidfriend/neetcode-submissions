class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> umap;
        for (const auto& str : strs) {
            vector<int> count(26, 0);
            for (const auto& c : str) {
                count[c - 'a']++;
            }
            string temp = to_string(count[0]);
            for (int a = 1; a < 26; a++) {
                temp += ',' + to_string(count[a]);
            }
            umap[temp].push_back(str);
        }
        vector<vector<string>> result;
        for (const auto& key : umap) {
            result.push_back(key.second);
        }
        return result;
    }
};
