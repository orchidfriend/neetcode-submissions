class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> umap;
        int i = 0;
        int maxLength = 0;
        for (int j = 0; j < s.size(); j++) {
            if (umap.find(s[j]) != umap.end() && umap[s[j]] >= i) {
                i = umap[s[j]] + 1;
            }
            umap[s[j]] = j;
            maxLength = max(maxLength, j - i + 1);
        }
        return maxLength;
    }
};
