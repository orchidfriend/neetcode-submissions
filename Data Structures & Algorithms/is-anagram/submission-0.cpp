class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> umap;

        if (s.length()!=t.length())
            return false;

        for(int a=0;a<s.length();a++) {
            if (umap.find(s[a]) == umap.end())
                umap[s[a]]=0;
            umap[s[a]]++;
        }
        
        for(int a=0;a<s.length();a++) {
            umap[t[a]]--;
        }
        for (const auto& pair : umap) {
            // pair.first  就是 Key (數字)
            // pair.second 就是 Value (位置)
            if (pair.second != 0) {
                return false;
            }
        }
        return true;
    }
};
