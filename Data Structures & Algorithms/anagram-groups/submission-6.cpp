class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagrams;
        vector<vector<string>> result;
        for (const auto& str : strs) {
            vector<int> count(26, 0);
            for (int a = 0; a < str.size(); a++) {
                count[str[a]-'a']++;
            }
            string key;
            for (int a = 0; a < 26; a++) {
                key += to_string(count[a]) + ',';
            }
            anagrams[key].push_back(str);
        }
        for (const auto& anagram : anagrams) {
            result.push_back(anagram.second);
        }
        return result;
    }
};
