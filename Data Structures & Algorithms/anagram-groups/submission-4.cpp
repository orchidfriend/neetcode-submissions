class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>> res;
        vector<vector<string>> result;
        
        for (int a=0;a<strs.size();a++) {
            vector<int> freq(26,0);
            for(int b=0;b<strs[a].length();b++) {
                freq[strs[a][b]-'a']++;
            }
            string s;
            for(int b=0;b<26;b++) {
                s+= (to_string(freq[b])+(char)('a'+b));
            }
            res[s].push_back(strs[a]);
        }
        for(const auto& key:res) {
            result.push_back(key.second);
        }
        return result;
    }
};
