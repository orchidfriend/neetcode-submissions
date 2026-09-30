class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for (const auto& str : strs) {
            vector<int> count(26, 0);
            for (const auto& c : str) {
                count[c - 'a']++;
            }
            string temp;
            for (int a = 0; a < 26; a++) {
                temp += to_string(count[a]) + ',';
            }
            res[temp].push_back(str);
        }
        vector<vector<string>> result;
        for (const auto& key : res) {
            result.push_back(key.second);
        }
        return result;
    }
};
