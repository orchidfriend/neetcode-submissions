class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> group;
        vector<vector<string>> result;
        for (const auto& str : strs) {
            int count[26] = {0};
            for (int a = 0; a < str.size(); a++) {
                count[str[a] - 'a']++;
            }
            string temp = to_string(count[0]);
            for (int a = 1; a < 26; a++) {
                temp += ',' + to_string(count[a]);
            }
            group[temp].push_back(str);
        }
        for (const auto& g : group) {
            result.push_back(g.second);
        }
        return result;
    }
};
