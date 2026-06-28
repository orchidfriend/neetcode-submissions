class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> umap;

        if (s.length()!=t.length())
            return false;
        for(int a=0;a<s.length();a++){
            umap[s[a]]++;
            umap[t[a]]--;
        }
        for(const auto& key:umap) {
            if(key.second !=0 )
                return false;
        }
        return true;
    }
};
