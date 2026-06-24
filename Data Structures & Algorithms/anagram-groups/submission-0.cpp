class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> umap;
        vector<vector<string>> result;

        for(const auto& s:strs) {
            string temp = s;
            sort(temp.begin(),temp.end());
            umap[temp].push_back(s);
        }
        for(const auto& item:umap) {
            result.push_back(item.second);
        }
        return result;
    }
};
