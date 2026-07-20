class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> pos;
        int i = 0;
        int res = 0;
        for (int j = 0; j < s.size(); j++) {
            if (pos.find(s[j]) != pos.end()) {
                i = max(i, pos[s[j]] + 1);
            }
            pos[s[j]] = j;
            res = max(res, j - i + 1);
        }
        return res;
    }
};
