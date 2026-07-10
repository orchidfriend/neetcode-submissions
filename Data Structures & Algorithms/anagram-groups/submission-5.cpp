class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> res;
        for (int a = 0; a < strs.size(); a++) {
            vector<int> freq(26, 0);
            for (int b = 0; b < strs[a].length(); b++) {
                freq[strs[a][b] - 'a']++;
            }
            string str = to_string(freq[0]);
            for (int b = 1; b < 26; b++) {
                str += ',' + to_string(freq[b]);
            }
            res[str].push_back(strs[a]);
        }
        vector<vector<string>> result;
        for (const auto& key : res) {
            result.push_back(key.second);
        }
        return result;
    }
};
