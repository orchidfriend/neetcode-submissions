class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> posit;
        int i = 0;
        int maxLen = 0;
        for (int j = 0; j < s.size(); j++) {
            if (posit.find(s[j]) != posit.end()) {
                i = max(i, posit[s[j]] + 1);
            }
            posit[s[j]]=j;
            maxLen = max(maxLen, j - i + 1);
        }
        return maxLen;
    }
};
